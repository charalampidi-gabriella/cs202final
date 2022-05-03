#include <console.h>
#include <iostream>

std::string Console::getFileName() {
    int file;
    std::string filename;
    bool BREAK = false;
    std::cout << "~~~Audio wav file Program~~~" << std::endl;

    while (BREAK != true) {
        std::cout << "Please select a filename from the list: " << std::endl;
        std::cout << "\n - (0) 8bit-mono.wav" << std::endl;
        std::cout << " - (1) 8bit-stereo.wav" << std::endl;
        std::cout << " - (2) 16bit-mono.wav" << std::endl;
        std::cout << " - (3) 16bit-stereo.wav\n" << std::endl;
        std::cin >> file;
        std::cout << "You selected: ";

        //case handling
        switch (file) {
            case 0:
                filename = "8bit-mono.wav";
                std::cout << "8bit-mono.wav";
                break;
            case 1:
                filename = "8bit-stereo.wav";
                std::cout << "8bit-stereo.wav";
                break;
            case 2:
                filename = "16bit-mono.wav";
                std::cout << "16bit-mono.wav";
                break;
            case 3:
                filename = "16bit-stereo.wav";
                std::cout << "16bit-stereo.wav";
                break;
            default:
                BREAK = true;
                break;
        }
    }
    return filename;
}