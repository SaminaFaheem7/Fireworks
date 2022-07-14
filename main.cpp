#include <iostream>
#include <stdlib.h>
#include <vector>
#include "Firework.h"
using namespace std;

int main() {
    srand(rand()%100);
    cout << "Welcome to Program 4!" << endl;

    bool input = continueMenu();

    while (true) {
        if (input) {

            firework();               // Calling the firework function

            input = continueMenu();
        }

        else {
            cout << " Bye!";
            break;
        }
    }

    return 0;
}
