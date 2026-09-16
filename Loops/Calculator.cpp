#include <iostream>
using namespace std;

int main(){
    double first, second;
    char operation;
    cout << "Enter the first number, operator, and second number: ";
    cin >> first >> operation >> second;

    switch(operation){
        case '+': cout << first + second << "\n"; break;
        case '-': cout << first - second << "\n"; break;
        case '*': cout << first * second << "\n"; break;
        case '/':
            if(second != 0){
                cout << first / second << "\n";
            }
            else{
                cout << "Division by zero is not allowed.\n";
            }
            break;
        default: cout << "Invalid operator.\n";
    }

    return 0;
}