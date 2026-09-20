//Declaration of arrays
#include <iostream>
using namespace std;

int main(){

    int first[5] = {1, 2, 3, 4, 5};
    cout<<"Elements of the first array are: ";
    for(int i=0; i<5; i++){
        cout<<first[i]<<" ";
    }

    int second[5] = {5,4,3,2,1};
    cout<<"\nElements of the second array are: ";
    for(int i=0; i<5; i++){
        cout<<second[i]<<" ";
    }

    int third[5];
    cout<<"\nEnter 5 elements for the third array: ";
    for(int i=0; i<5; i++){ 
        cin>>third[i];
    }

    cout<<"\nElements of the third array are: ";    
    for(int i =0; i<5; i++){
        cout<<third[i]<<" ";
    }

    int fourth[5] = {1, 2}; 
    cout<<"\nElements of the fourth array are: ";
    for(int i =0; i<5; i++){
        cout<<fourth[i]<<" ";
    }
    
    int fifth[5]={0};
    cout<<"\nElements of the fifth array are: ";
    for(int i=0; i<5; i++){
        cout<<fifth[i]<<" ";
    }

}