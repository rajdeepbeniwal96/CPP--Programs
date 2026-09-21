#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number to search: ";
    cin >> target;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = true;
            cout << "Number found at index " << i << endl;
            break;
        }
    }

    if (!found) {
        cout << "Number not found in the array." << endl;
    }

    return 0;
}
