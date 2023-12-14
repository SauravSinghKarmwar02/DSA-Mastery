#include<iostream>
#include<stack>

using namespace std;

int main() {
    stack<string> s;

    s.push("Saurav");
    s.push("singh");
    s.push("karmwar"); 

    cout << "Top Element -> " << s.top() << endl;

    s.pop();

    cout << "Top Element -> " << s.top() << endl;

    cout << "size of stack " << s.size() << endl; 

}