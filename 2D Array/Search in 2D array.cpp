#include <iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter the no. of rows of matrix: ";
    cin>>row;
    cout<<"Enter the no. of columns of matrix: ";
    cin>>col;

    cout<<"Enter the elements of the matrix: \n";
    
    int arr[row][col];
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cin>>arr[i][j];
            }
        }
    
    cout<<"Enter the no. to find in the matrix: ";
    int n;
    cin>>n;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==n){
                cout<<"The no. is found at index: "<<i<<","<<j;
                return 0;
            }
        }
    }
    cout<<"The no. is not found in the matrix.";
}