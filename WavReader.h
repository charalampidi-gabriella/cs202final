#ifndef WAVREADER_H
#define WAVREADER_H

#include "FileAttributes.h"
#include "WaveHeader.h"
#include <vector>
#include <string>

class WavReader {
    private:
        FileAttributes fileAttributes;
    public:
        const std::vector<float> &open8b(std::string fileName);
        const std::vector<float> &open16b(std::string fileName);
};


#endif