#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cout<<"Enter total no. of elements in array: ";
    cin>>n;

    cout<<"Enter elements of array: ";

    vector<char> arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"You have entered: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
