#include <iostream>
using namespace std;

int main(){
    int row1,col1;
    cout<<"Enter the no. of rows of matrix 1: ";
    cin>>row1;
    cout<<"Enter the no. of columns of matrix 1: ";
    cin>>col1;

    cout<<"Enter the elements of the matrix 1: \n";
    
    int arr[row1][col1];
        for(int i=0; i<row1; i++){
            for(int j=0; j<col1; j++){
                cin>>arr[i][j];
            }
        }
    
    int row2,col2;
    cout<<"Enter the no. of rows of matrix 2: ";
    cin>>row2;
    cout<<"Enter the no. of columns of matrix 2: ";
    cin>>col2;

    cout<<"Enter the elements of the matrix 2: \n";

    int arr2[row2][col2];
        for(int i=0; i<row2; i++){
            for(int j=0; j<col2; j++){
                cin>>arr2[i][j];
            }
        }

    if(row1!=row2 || col1!=col2){
        cout<<"The two matrices cannot be added as they are not of the same size.";
        return 0;
    }

    int sum[row1][col1];
        for(int i=0; i<row1; i++){
            for(int j=0; j<col1; j++){
                sum[i][j]=arr[i][j]+arr2[i][j];
            }
        }

    cout<<"The sum of matrices is: \n";
    
        for(int i=0; i<row1; i++){
            for(int j=0; j<col1; j++){
                cout<<sum[i][j]<<" ";
            }
            cout<<"\n";
        }
    
    
}