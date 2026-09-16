#include <iostream>
using namespace std;

int main(){
    char signal;
    cout << "Enter the traffic signal (R, Y, or G): ";
    cin >> signal;

    switch(signal){
        case 'R':
        case 'r': cout << "Stop.\n"; break;
        case 'Y':
        case 'y': cout << "Wait.\n"; break;
        case 'G':
        case 'g': cout << "Go.\n"; break;
        default: cout << "Invalid signal.\n";
    }

    return 0;
}