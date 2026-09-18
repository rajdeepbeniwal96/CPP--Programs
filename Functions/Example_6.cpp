#include <iostream>
using namespace std;

void rectangle(int a, int b, int c, int d){

    if((a==b && c==d) || (a==c && b==d) || (a==d && b==c)){
        cout<<"A rectangle can be formed with the given sides."<<endl;
    }
    else{
        cout<<"A rectangle cannot be formed with the given sides."<<endl;
    }

}

int main(){
    int a,b,c,d;
    cout<<"Enter the four sides of the rectangle: ";
    cin>>a>>b>>c>>d;

    rectangle(a,b,c,d);
}