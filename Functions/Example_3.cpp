#include <iostream>
using namespace std;

//Converting a small alphabet into a capital one.

int convert(char name){

    char ans = name - 'a' +'A';
    return ans;
}

int main(){

    char name;
    cout<<"Enter a character: ";
    cin>>name;

    cout<<"The converted character is: "<<(char)convert(name)<<endl;

    return 0;
}