#ifndef FEED_BACK_ECH_IWAVMODEL_H
#define FEED_BACK_ECH_IWAVMODEL_H

#include "FileAttributes.h"
#include <vector>

class IWavModel {
    public:
        virtual FileAttributes openFile(const std::string &file_name) = 0;
        virtual std::vector<std::string> getProcessList() = 0;
        virtual void setOutputFileName(const std::string & setOutputFileName) = 0;
        virtual void processFile(const std::string & processID) = 0;
};

#endif