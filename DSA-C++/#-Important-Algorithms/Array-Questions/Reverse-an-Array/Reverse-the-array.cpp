#include<iostream>
#include<vector>

using namespace std;

vector <int> reverse (vector <int> v) {
    int s = 0, e = v.size() - 1;

    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }

    return v;

    }

int main() {
    vector <int> arr;

    int n;
    cout << endl << "Enter the size of array you want: ";
    cin >> n;
    cout << endl;

    for(int i=0; i<n; i++) {
        int input;
        cout << "Enter element #" << (i + 1) << ": ";
        cin >> input;
        arr.push_back(input);
    }
    cout << endl;

    cout << endl << "Array = ";
    for(int i : arr) {
        (i == n-1) ? cout << arr[i] : cout << arr[i] << ", ";
    }
    cout << endl;

    vector <int> arr2 = reverse(arr);

    cout << endl << "Reversed Array = ";
    for(int i : arr2) {
        (i == n-1) ? cout << arr2[i] : cout << arr2[i] << ", ";
    }
    cout << endl;

    cout << endl;
}