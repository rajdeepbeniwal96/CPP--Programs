#include <iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    int number = 2;
    int sum = 0;
    do{
        sum += number;
        number += 2;
    }while(number <= limit);

    cout << "Sum of even numbers: " << sum << "\n";
    return 0;
}