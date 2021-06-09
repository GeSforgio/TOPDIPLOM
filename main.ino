#include "classes.h"
#include "algo.h"
#include "Machine.h"


using namespace std;

MachineClass machine;
void setup() {
    
}

int start = 1;
    int last = 2;
    bool check = false;
    char* p= new char[8];

void loop() {
    if (check == false)
    {
        algo(start,last,p);
        check = true;
    }
    machine.MoveForward(15,SM);
}
