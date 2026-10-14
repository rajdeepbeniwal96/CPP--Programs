#include <iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter the no. of rows of matrix: ";
    cin>>row;
    cout<<"Enter the no. of columns of matrix: ";
    cin>>col;

    cout<<"Enter the elements of the matrix: \n";
    
    int sum=0;

    int arr[row][col];
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cin>>arr[i][j];

                if(i==j){
                    sum+=arr[i][j];
                }
            }
        }
    
    int sum2 = 0;
    int i=row-1,j=0;
    while(i>=0 && j<col){
        sum2+=arr[i][j];
        i--;
        j++;
    }

    cout<<"The sum of diagonal elements is: "<<sum;
    cout<<"\nThe sum of anti-diagonal elements is: "<<sum2;

}