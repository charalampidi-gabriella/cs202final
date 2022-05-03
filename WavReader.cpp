#include "WavReader.h"
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstdint>

typedef struct wav_header {
// RIFF Header
	char riff_header[4]; // Contains "RIFF"
	int wav_size; // Size of the wav portion of the file, which follows the first 8 bytes. File size - 8
	char wave_header[4]; // Contains "WAVE"
// Format Header
	char fmt_header[4]; // Contains "fmt " (includes trailing space)
	int fmt_chunk_size; // Should be 16 for PCM
	short audio_format; // Should be 1 for PCM. 3 for IEEE Float
	short num_channels;
	int sample_rate;
	int byte_rate; // Number of bytes per second. sample_rate * num_channels * Bytes Per Sample
	short sample_alignment; // num_channels * Bytes Per Sample
	short bit_depth; // Number of bits per sample
// Data
	char data_header[4]; // Contains "data"
	int data_bytes; // Number of bytes in data. Number of samples * num_channels * sample byte size
// char bytes[]; // Remainder of wave file is bytes

} wav_header;

const std::vector<float> &open8b(std::string fileName) {
    std::vector<float> soundData;
    wav_header waveHeader;
    std::ifstream file (fileName, std::ios::binary | std::ios::in);
    uint8_t * buffer = nullptr; // or unsigned char *
    if (file.is_open()) {
        file.read((char *) &waveHeader, sizeof(wav_header));
        buffer = new uint8_t [waveHeader.data_bytes];
        file.read((char *) buffer, waveHeader.data_bytes);

        for (int i = 0; i < waveHeader.data_bytes / waveHeader.sample_alignment; i++) {
            uint8_t value = buffer[i];
            float scaled = (2 * buffer[i] / 255.0) -1.0;
            soundData.push_back(scaled);
        }
        file.close();
    }
    delete[] buffer;
    return soundData;
}

const std::vector<float> &open16b(std::string fileName) {
    std::vector<float> soundData;
    wav_header waveHeader;
    std::ifstream file(fileName, std::ios::binary | std::ios::in);
    short * buffer = nullptr;
    if (file.is_open()) {
        file.read((char *) &waveHeader, sizeof(wav_header));
        buffer = new short[waveHeader.data_bytes/2];
        file.read((char*) buffer, waveHeader.data_bytes);

        for (int i = 0; i < waveHeader.data_bytes / waveHeader.sample_alignment; i++) {
            soundData.push_back((float)buffer[i] / 65535);
        }
        file.close();
    }
    delete[] buffer;
    return soundData;
}