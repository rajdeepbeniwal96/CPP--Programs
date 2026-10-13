#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 20, 20, 30, 40, 50};

    auto lb = lower_bound(v.begin(), v.end(), 20);
    cout << "Lower bound value: " << *lb << endl;
    cout << "Lower bound index: " << lb - v.begin() << endl;

    auto ub = upper_bound(v.begin(), v.end(), 20);
    cout << "Upper bound value: " << *ub << endl;
    cout << "Upper bound index: " << ub - v.begin() << endl;

    return 0;
}
