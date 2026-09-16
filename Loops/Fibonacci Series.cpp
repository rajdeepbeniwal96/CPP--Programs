#include <iostream>
using namespace std;

int main(){
    int terms;
    cout << "Enter the number of terms: ";
    cin >> terms;

    long long first = 0;
    long long second = 1;
    int count = 1;
    if(terms > 0){
        do{
            cout << first << " ";
            long long next = first + second;
            first = second;
            second = next;
            count++;
        }while(count <= terms);
    }

    cout << "\n";
    return 0;
}