// Code to convert decimal to octa
#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    int rem, ans = 0, mul = 1;

    while(num>0){
        rem=num%8;
        num=num/8;
        ans = rem*mul + ans;
        mul*=10;
        

    }

    cout << "Octa equivalent: " << ans << endl;
    return 0;
}