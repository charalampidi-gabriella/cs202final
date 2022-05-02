#include "wavModelImpl.h"
#include <vector>

FileAttributes WavModelImpl::openFile(const std::string &file_name) {
    //dummy version
    //instantiate a wav reader and load the file
    //store the buffer in this object or in the wav model

    FileAttributes fileAttributes;
    fileAttributes.bits_per_sample = 8;
    fileAttributes.file_name = file_name;
    return fileAttributes;
}

std::vector<std::string> WavModelImpl::getProcessList() {
    return std::vector<std::string> {
        "echo",
        "abby normalization"
    };
}

void WavModelImpl::setOutputFileName(const std::string &outputFileName) {

}

void WavModelImpl::processFile(const std::string &processID) {
    if(processID == "echo") {
        ISignalProcessor +processor = new Echo();
        process -> process()...
    }
}