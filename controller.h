#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <console.h>
#include <WavModelImpl.h>

class Controller {
    private:
        Console *console;
        IWavModel * model = new WavModelImpl();
    public:
        bool run();
        void setConsole(Console *console);
};


#endif