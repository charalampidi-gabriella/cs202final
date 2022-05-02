/*
0) from main instantiate the Controller
1) from main instantiate the console
2) from main setUI(console)
3) from main run controller
*/
#include <iostream>
#include <fstream>
using namespace std;

struct WavHeading {
    char riffId[4];
    unsigned long headerChunkSize;
    char waveId[4];
    char formatChunkId[4];
    unsigned long formatChunkSize;
    unsigned short compressionCode;
    unsigned short numberOfChannels;
    unsigned long samplesRate;
    unsigned long byteRate;
    unsigned short blockAlign;
    unsigned short bitsPerSample;
    char dataChunkId[4];
    unsigned long dataChunkSize;
};


int main() {
    int duration = 2;
    ofstream audioFile;
    audioFile.open("waveform.wav", ios::binary);

    //Header chunk
    audioFile << "RIFF";
    audioFile << "----";
    audioFile << "WAVE";

    // Format chunk
    audioFile << "fmt ";
    audioFile.close();
    return 0;
}