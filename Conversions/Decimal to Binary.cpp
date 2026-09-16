// Code to convert decimal to binary
#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    int rem, ans = 0, mul = 1;

    while(num>0){
        rem=num%2;
        num=num/2;
        ans = rem*mul + ans;
        mul*=10;
    }

    cout << "Binary equivalent: " << ans << endl;
    return 0;
}