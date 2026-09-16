// Code to convert binary to decimal 
#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter a binary number: ";
    cin >> num;
    int rem1, ans1 = 0, mul1 = 1;

    while(num>0){
        rem1=num%10;
        num=num/10;
        ans1 = rem1*mul1 + ans1;
        mul1*=2;
        }

    int rem2, ans2 = 0, mul2 = 1; 

    while(ans1>0){
      rem2=ans1%8;
      ans1/=8;
      ans2 += rem2*mul2;
      mul2*=10;
    }

    cout << "Octa equivalent: " << ans2 << endl;
    return 0;
}
