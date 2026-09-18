#include <iostream>
using namespace std;

void prime(int n) {
    if (n <= 1) {
        cout << "Not a prime number." << endl;
        return;
    }

    bool isPrime = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "Prime number." << endl;
    else
        cout << "Not a prime number." << endl;
}

void fact(long long n) {
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return;
    }

    unsigned long long ans = 1;
    for (long long i = 1; i <= n; i++) {
        ans *= i;
    }

    cout << "Factorial is: " << ans << endl;
}

int main() {
    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;

    prime(a);
    prime(b);
    fact(a);
    fact(b);

    return 0;
}
