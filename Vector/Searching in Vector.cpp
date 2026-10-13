#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 15, 54, 125, 235};

    cout << "Is 54 present: " << binary_search(v.begin(), v.end(), 54) << endl;
    cout << "Is 55 present: " << binary_search(v.begin(), v.end(), 55) << endl;

    auto it = find(v.begin(), v.end(), 54);
    if (it != v.end()) {
        cout << "Index of 54: " << it - v.begin() << endl;
    }

    vector<int> v2 = {1, 2, 3, 2, 2, 4, 5};
    cout << "Count of 2: " << count(v2.begin(), v2.end(), 2) << endl;

    return 0;
}
