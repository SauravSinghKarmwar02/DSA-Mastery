#include <iostream>
#include <vector>
using namespace std;

const int N = 3;  // Define the size of the matrix

void RotateMatrix(int matrix[][N]) {
    // Rotate the matrix about its main diagonal.
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Rotate the matrix about its middle column.
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N / 2; j++) {
            swap(matrix[i][j], matrix[i][N - j - 1]);
        }
    }
}

int main() {
    int arr[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << endl << "Matrix before rotation: " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "  " << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Rotating the matrix
    RotateMatrix(arr);

    cout << endl << "Matrix after rotation: " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "  " << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
}
