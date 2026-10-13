#include <iostream>
#include <vector>
using namespace std;

void passByValue(vector<int> v) {
    v.push_back(100);
}

void passByReference(vector<int>& v) {
    v.push_back(100);
}

int main() {
    vector<int> v = {1, 2, 3};

    passByValue(v);
    cout << "After passByValue size: " << v.size() << endl;

    passByReference(v);
    cout << "After passByReference size: " << v.size() << endl;

    cout << "Elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
