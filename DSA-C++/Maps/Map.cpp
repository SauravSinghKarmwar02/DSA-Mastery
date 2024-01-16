#include<iostream>
#include<map>

using namespace std;

int main() {
    map<int, string> m;

    m[2] = "singh";
    m[1] = "Saurav";
    m[3] = "karmwar";

    m.insert ({5, "chhapra"});

    cout << endl;

    for(auto i:m) {
        cout << i.first << ". " << i.second << endl;
    }

    cout << endl;
}