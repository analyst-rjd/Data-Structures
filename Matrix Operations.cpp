#include <iostream>
using namespace std;

void display(int rows1, int columns1, int rows2, int columns2) {
    int matx1[rows1][columns1];
    int matx2[rows2][columns2];

    // Input for first matrix
    cout << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < columns1; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matx1[i][j];
        }
    }

    // Input for second matrix
    cout << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < columns2; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matx2[i][j];
        }
    }

    // Display first matrix
    cout << "Matrix 1:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < columns1; ++j) {
            cout << matx1[i][j] << " ";
        }
        cout << endl;  
    }

    // Display second matrix
    cout << "Matrix 2:" << endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < columns2; ++j) {
            cout << matx2[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    int rows1, columns1;
    int rows2, columns2;

    // Get dimensions for first matrix
    cout << "Enter size of matrix 1" << endl;
    cout << "Rows of matrix 1: ";
    cin >> rows1;
    cout << "Columns of matrix 1: ";
    cin >> columns1;

    // Get dimensions for second matrix
    cout << "Enter size of matrix 2" << endl;
    cout << "Rows of matrix 2: ";
    cin >> rows2;
    cout << "Columns of matrix 2: ";
    cin >> columns2;

    // Call display function with correct parameters
    display(rows1, columns1, rows2, columns2);

    return 0;
}
