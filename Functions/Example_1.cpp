#include <iostream>
using namespace std;

int sum(int x, int y){ //Function declaration

    //Function definition
    int ans=x+y;
    return ans;

}

int mul(int x, int y){ //Function declaration

    //Function definition
    int ans=x*y;
    return ans;

}

void fun(){
    cout<<"This is all done."<<endl;
}

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"Sum is: "<<sum(a,b)<<endl; //Function call
    cout<<"Product is: "<<mul(a,b)<<endl; //Function call

    //a,b above are arguments.

    //Since fun is of void type, it doesn't require cout.
    fun(); //Function call

    
}