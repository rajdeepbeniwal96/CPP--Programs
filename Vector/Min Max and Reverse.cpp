#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {45, 12, 89, 23, 7, 99, 34};

    auto min = min_element(v.begin(), v.end());
    cout << "Minimum element: " << *min << endl;
    cout << "Index of min: " << min - v.begin() << endl;

    auto max = max_element(v.begin(), v.end());
    cout << "Maximum element: " << *max << endl;
    cout << "Index of max: " << max - v.begin() << endl;

    reverse(v.begin(), v.end());
    cout << "Reversed vector: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
