#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    cout << "Using iterator: ";
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Using reverse iterator: ";
    for (auto it = v.rbegin(); it != v.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    auto it = v.begin();
    cout << "First element: " << *it << endl;
    cout << "Second element: " << *(it + 1) << endl;

    return 0;
}
