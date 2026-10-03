#include<iostream>
using namespace std;

int main(){
  int n,k;
  cout<<"Enter the size of array: ";
  cin>>n;

  int arr[n];
  cout<<"Enter the elements of array: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  cout<<"Enter the elements to found: ";
  cin>>k;  

  for(int i=0; i<n; i++){
    if(arr[i]==k)
      cout<<"Element is present at index: "<<i;
  }

}