/*
0) from main instantiate the Controller
1) from main instantiate the console
2) from main setUI(console)
3) from main run controller
*/
#include <iostream>
#include <fstream>
using namespace std;


#include <console.h>
#include <controller.h>
#include <model.h>


int main() {
    Console console;
    Controller controller;
    controller.setConsole(&console);
    controller.run();
    // -> further implementation
    return 0;
}