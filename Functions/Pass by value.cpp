#include <iostream>
using namespace std;

// Function takes a copy of the value passed to it
void increment(int x) {
    x++; // Changes only the local copy
    cout << "Inside function: x = " << x << endl;
}

int main() {
    int num = 10;

    cout << "Before function call: num = " << num << endl;
    increment(num); // Pass-by-value: a copy of num is sent
    cout << "After function call: num = " << num << endl;

    // The original variable remains unchanged
    return 0;
}
