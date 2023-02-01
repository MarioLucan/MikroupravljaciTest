#include "mbed.h"
bool istina = false;
// main() runs in its own thread in the OS
int main()
{
    while (true) {
istina=!istina;
    }
}

