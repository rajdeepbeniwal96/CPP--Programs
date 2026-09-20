//This file includes how to take input from the user and how to output.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements u want to store in array: ";
    int arr[n];

    cout<<"Enter the elements of array: ";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Here are the elements of array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}