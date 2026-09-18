#include <iostream>
using namespace std;

//Calculate trailing zeroes in factorial of a number.

long long fact(int n){

    long long ans = 1;
    while(n>0){
        
        ans *= n;
        n--;    
    }
    return ans;
}
long long zeroes(long long n ){

    long long count = 0;
    while(n >= 5){
        n /= 5;
        count += n;
    }
    return count;
}

int main(){
    
    long long n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is: " << fact(n) << endl;
    cout << "Number of trailing zeroes in " << fact(n) << " is: " << zeroes(n) << endl;
}