#ifndef FEED_BACK_ECHO_FILEATTRIBUTES_H
#define FEED_BACK_ECHO_FILEATTRIBUTES_H

#include <string>

struct FileAttributes {
    private:
    public:
        std::string file_name;
        int sample_rate;
        int bits_per_sample;
        int num_channels;
        int num_seconds;
};

#endif