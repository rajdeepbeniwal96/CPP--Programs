#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 235, 15, 54, 125};

    sort(v.begin(), v.end());
    cout << "Sorted in increasing order: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    sort(v.begin(), v.end(), greater<int>());
    cout << "Sorted in decreasing order (greater): ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    sort(v.rbegin(), v.rend());
    cout << "Sorted in decreasing order (rbegin): ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
