#ifndef FEED_BACK_ECHO_WAVMODELIMPL_H
#define FEED_BACK_ECHO_WAVMODELIMPL_H

#include "IWavModel.h"

class WavModelImpl : public IWavModel {
    public: 
        std::vector<std::string> getProcessList() override;

        void processFile(const std::string &processID) override;

        void setOutputFileName(const std::string &outputFileName) override;

        FileAttributes openFile(const std::string &file_name) override;
};

#endif