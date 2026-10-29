#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int row,col;
    cout<<"Enter the no. of rows of matrix: ";
    cin>>row;
    cout<<"Enter the no. of columns of matrix: ";
    cin>>col;   

    vector<vector<int>> arr(row, vector<int>(col));
    cout<<"Enter the elements of the matrix: \n";  
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Here is the wave form of the matrix: \n";
    
    for(int j=0; j<col; j++){

        if(j%2==0){
            for(int i=0; i<row; i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=row-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }

}