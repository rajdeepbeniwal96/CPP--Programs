#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;

    v.push_back(2);
    v.push_back(3);
    v.push_back(10);

    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;

    v.push_back(20);

    cout << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;

    vector<int> v1(5, 1);
    cout << "Size of v1: " << v1.size() << endl;
    cout << "Capacity of v1: " << v1.capacity() << endl;

    v1.push_back(8);
    cout << "Size of v1: " << v1.size() << endl;
    cout << "Capacity of v1: " << v1.capacity() << endl;

    v.pop_back();
    cout << "After pop_back size: " << v.size() << endl;
    cout << "After pop_back capacity: " << v.capacity() << endl;

    return 0;
}
