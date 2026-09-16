#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int multiplier = 1;
    do{
        cout << number << " x " << multiplier << " = " << number * multiplier << "\n";
        multiplier++;
    }while(multiplier <= 10);

    return 0;
}