#include <iostream>
using namespace std;

// Function takes the original variable by reference
void increment(int &x) {
    x++; // Changes the original value
    cout << "Inside function: x = " << x << endl;
}

int main() {
    int num = 10;

    cout << "Before function call: num = " << num << endl;
    increment(num); // Pass-by-reference: original variable is used
    cout << "After function call: num = " << num << endl;

    // The original variable is changed
    return 0;
}
