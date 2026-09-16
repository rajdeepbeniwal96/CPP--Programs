#include <iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    int number = 0;
    cout << "Armstrong numbers: ";
    do{
        int original = number;
        int temporary = number;
        int digits = 0;
        do{
            digits++;
            temporary /= 10;
        }while(temporary != 0);

        int sum = 0;
        temporary = number;
        do{
            int digit = temporary % 10;
            int power = 1;
            int count = 0;
            do{
                power *= digit;
                count++;
            }while(count < digits);
            sum += power;
            temporary /= 10;
        }while(temporary != 0);

        if(sum == original){
            cout << number << " ";
        }
        number++;
    }while(number <= limit);

    cout << "\n";
    return 0;
}