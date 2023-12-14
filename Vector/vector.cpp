#include<iostream>
#include<array>
#include<vector>

using namespace std;

int main() {
    // Static array
    array<int, 4> a = {1,2,3,4};

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }

    // Dynamic array
    vector<int> v;
    cout << "capacity -> " << v.capacity() << endl;

    v.push_back(1);
    cout << "capacity -> " << v.capacity() << endl;

    v.push_back(2);
    cout << "capacity -> " << v.capacity() << endl;

    v.push_back(3);
    cout << "capacity -> " << v.capacity() << endl;
    cout << "Size -> " << v.size() << endl;

    cout << "before pop " << endl;
    for(int i:v) {
        cout << v[i] << " ";
    }

    v.pop_back();

    cout << endl << "after pop " << endl;
    for(int i:v) {
        cout << v[i] << " ";
    }
    cout << endl;
}