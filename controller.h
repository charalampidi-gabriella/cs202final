#infdef CONTROLLER_H
#define CONTROLLER_H

class Controller {
    private:
        Console *console;
        IWavModel * model = new WavModelImpl();
    public:
        bool run();
        void setConsole(Console *console);
};


#endif