#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    bool isPrime = number > 1;
    int divisor = 2;
    if(isPrime){
        do{
            if(number % divisor == 0 && divisor != number){
                isPrime = false;
            }
            divisor++;
        }while(divisor < number && isPrime);
    }

    if(isPrime){
        cout << number << " is prime.\n";
    }
    else{
        cout << number << " is not prime.\n";
    }

    return 0;
}