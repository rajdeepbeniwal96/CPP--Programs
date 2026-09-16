#include <iostream>
using namespace std;

int main(){
    char grade;
    cout << "Enter your grade (A, B, C, D, or F): ";
    cin >> grade;

    switch(grade){
        case 'A':
        case 'a': cout << "Excellent performance.\n"; break;
        case 'B':
        case 'b': cout << "Good performance.\n"; break;
        case 'C':
        case 'c': cout << "Average performance.\n"; break;
        case 'D':
        case 'd': cout << "Needs improvement.\n"; break;
        case 'F':
        case 'f': cout << "Please work harder.\n"; break;
        default: cout << "Invalid grade.\n";
    }

    return 0;
}