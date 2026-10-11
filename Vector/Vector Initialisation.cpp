#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    vector<int> v1(5, 1);
    cout << "Elements of v1: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    vector<int> v2(6);
    cout << "Elements of v2: ";
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << endl;

    vector<int> v3 = {1, 2, 3, 5, 7};
    cout << "Elements of v3: ";
    for (int i = 0; i < v3.size(); i++) {
        cout << v3[i] << " ";
    }
    cout << endl;

    vector<int> v4(v3);
    cout << "Elements of v4: ";
    for (int i = 0; i < v4.size(); i++) {
        cout << v4[i] << " ";
    }
    cout << endl;

    vector<int> v5;
    v5 = v3;
    cout << "Elements of v5: ";
    for (int i = 0; i < v5.size(); i++) {
        cout << v5[i] << " ";
    }
    cout << endl;

    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> v6(n, 10);
    cout << "Elements of v6: ";
    for (int i = 0; i < v6.size(); i++) {
        cout << v6[i] << " ";
    }
    cout << endl;

    return 0;
}
