#include "model.h"
#include "WavReader.h"
#include <iostream>

// user interaction
// more of a bus type of file

void Model::openFile(std::string fileName) {
    if (fileName[0] == 0) {
        //8bit
        std::vector<float> soundData;
        soundData = wr->open8b(fileName);
        for (int i = 0; i < soundData.size(); i++) {
            std::cout << soundData[i];
        }
    } else {
        //16bit
        std::vector<float> soundData;
        soundData = wr->open16b(fileName);
        for (int i = 0; i < soundData.size(); i++) {
            std::cout << soundData[i];
        }
    }
}