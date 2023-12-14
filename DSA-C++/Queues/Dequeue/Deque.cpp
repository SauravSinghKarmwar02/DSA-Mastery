#include<iostream>
#include<deque>

using namespace std;

int main() {
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    cout << "Front " << d.front() << endl;
    cout << "Back " << d.back() << endl;
}