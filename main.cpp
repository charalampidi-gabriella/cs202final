/*
0) from main instantiate the Controller
1) from main instantiate the console
2) from main setUI(console)
3) from main run controller
*/
#include <iostream>
#include <fstream>
using namespace std;


#include "console.h"
#include "controller.h"
#include "model.h"


int main() {
    Controller controller; // uml (0)
    Console console; // uml (1)
    controller.setConsole(&console); // uml (2)
    controller.run(); //  uml (3)
    // -> further implementation
    return 0;
}
