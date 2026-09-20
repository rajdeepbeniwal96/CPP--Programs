#include <iostream>
using namespace std;

int main(){
    
    int size;
    cout<<"Enter total number of elements in array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array: ";

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Size of array: ";
    cout<<sizeof(arr);
    cout<<"\nSize of elements in array: ";
    cout<<sizeof(arr)/sizeof(arr[0]);
    
    return 0;

}