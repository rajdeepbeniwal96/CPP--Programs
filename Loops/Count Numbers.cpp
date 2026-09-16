#include <iostream>
using namespace std;

int main(){
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    int number = 1;
    do{
        cout << number << " ";
        number++;
    }while(number <= limit);

    cout << "\n";
    return 0;
}