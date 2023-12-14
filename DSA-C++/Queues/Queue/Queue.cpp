#include<iostream>
#include<queue>

using namespace std;

int main() {
    queue <string> q;

    q.push("Saurav");
    q.push("singh");
    q.push("karmwar");

    cout << "Top element: " << q.front() << endl;

    q.pop();

    cout << "Top element: " << q.front() << endl;
}