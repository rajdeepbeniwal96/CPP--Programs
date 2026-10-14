#include<iostream>
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
    
    cout<<"Enter the index of the element you want to access: ";
    int n;
    cin>>n;

    int row_index = n / col;
    int col_index = n % col;

    cout<<"The element at index "<<n<<" is: "<<arr[row_index][col_index];
    cout<<"\nThe row index is: "<<row_index;
    cout<<"\nThe column index is: "<<col_index;

    



}