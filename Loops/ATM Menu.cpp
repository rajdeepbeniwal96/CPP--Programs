#include <iostream>
using namespace std;

int main(){
    const double balance = 10000;
    int choice;
    cout << "1. Check balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
    cout << "Choose an option: ";
    cin >> choice;

    switch(choice){
        case 1:
            cout << "Balance: " << balance << "\n";
            break;
        case 2:{
            double deposit;
            cout << "Enter deposit amount: ";
            cin >> deposit;
            cout << "New balance: " << balance + deposit << "\n";
            break;
        }
        case 3:{
            double withdrawal;
            cout << "Enter withdrawal amount: ";
            cin >> withdrawal;
            if(withdrawal > 0 && withdrawal <= balance){
                cout << "New balance: " << balance - withdrawal << "\n";
            }
            else{
                cout << "Invalid amount or insufficient balance.\n";
            }
            break;
        }
        case 4: cout << "Thank you for using the ATM.\n"; break;
        default: cout << "Invalid option.\n";
    }

    return 0;
}