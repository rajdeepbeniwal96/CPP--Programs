#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int n,key;
  bool check;
  cout<<"Enter the size of array: ";
  cin>>n;

  int arr[n];
  cout<<"Enter the elements of array: ";
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  cout<<"Enter the element to found: ";
  cin>>key;
  int start=0, end=n-1, mid;

  sort(arr,arr+n);

  while(start<=end){

    mid = start+(end-start)/2;

    if(arr[mid]==key){
    cout<<"Element is present at index: "<<mid;
    check=true;
    break;}

    else if(arr[mid]<key)
      start = mid+1;

    else if(arr[mid]>key)
      end = mid-1;
  }

  if(check!=true)
   cout<<"Element is not present.";

}