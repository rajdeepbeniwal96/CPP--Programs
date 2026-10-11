#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    cout << "v[0] = " << v[0] << endl;
    cout << "v[1] = " << v[1] << endl;
    cout << "v[4] = " << v[4] << endl;

    cout << "v.at(0) = " << v.at(0) << endl;
    cout << "v.at(2) = " << v.at(2) << endl;

    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;

    v[1] = 100;
    cout << "Updated v[1] = " << v[1] << endl;

    return 0;
}
