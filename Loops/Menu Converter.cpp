#include <iostream>
using namespace std;

int main(){
    int choice;
    double value;
    cout << "1. Kilometers to miles\n2. Celsius to Fahrenheit\n3. Kilograms to pounds\n";
    cout << "Choose a conversion and enter a value: ";
    cin >> choice >> value;

    switch(choice){
        case 1: cout << value * 0.621371 << " miles\n"; break;
        case 2: cout << (value * 9 / 5) + 32 << " Fahrenheit\n"; break;
        case 3: cout << value * 2.20462 << " pounds\n"; break;
        default: cout << "Invalid choice.\n";
    }

    return 0;
}