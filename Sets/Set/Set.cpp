#include<iostream>
#include<set>

using namespace std;

int main() {
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(0);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);

    cout << endl;

    for(auto i:s) {
        cout << i << endl;
    }

    cout << endl;
}