#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int expectedSum = (n + 1) * (n + 2) / 2;
    int missing = expectedSum - sum;

    cout << "Missing number is: " << missing << endl;

    return 0;
}
