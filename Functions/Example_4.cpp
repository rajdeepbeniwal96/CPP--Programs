#include<iostream>
#include <cmath>
using namespace std;

//Checking a number is armstrong or not.

bool armstrong(int num, int digit) {

    int n = num, sum = 0, rem;

    while(n){
        rem = n % 10;
        sum += pow(rem, digit); //pow is a inbuilt function to calculate the power of a number.
    }

    if(sum == num)
        return 1;
    else
        return 0;
}

int countdigit(int n){

    int count=0;
    while(n){
        count++;
        n/=10;
    }
    return count;
}

int main(){

    int num, digit;
    cout<<"Enter a number: ";
    cin>>num;

    digit = countdigit(num);

    cout<<armstrong(num, digit)<<endl;
    return 0;
}
