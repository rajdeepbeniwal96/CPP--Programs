#include <iostream>
#include <climits>

using namespace std;

int main(){

    int n;
    cout<<"Enter total no. of elements in array: ";
    cin>>n;

    cout<<"Enter elements of array: ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans=INT_MIN;

    for(int i=0; i<n; i++){
        if(ans<arr[i])
        ans=arr[i];
    }

    cout<<"Maximum element in array: "<<ans;
    
}