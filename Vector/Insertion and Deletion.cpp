#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(41);
    v.push_back(42);
    v.push_back(43);
    v.push_back(64);
    v.push_back(24);

    cout << "Elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After pop_back: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    v.erase(v.begin() + 1);

    cout << "After erase at index 1: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    v.insert(v.begin() + 1, 50);

    cout << "After insert 50 at index 1: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    v[1] = 37;

    cout << "After updating index 1 to 37: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    v.clear();
    cout << "Size after clear: " << v.size() << endl;
    cout << "Capacity after clear: " << v.capacity() << endl;

    return 0;
}
