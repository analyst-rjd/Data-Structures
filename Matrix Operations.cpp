#include <iostream>
using namespace std;

void inputMatrix(int matrix[][10], int rows, int cols) {
    cout << "Enter elements of the matrix (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

void addMatrices(int A[][10], int B[][10], int result[][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractmatrices(int A[][10], int B[][10], int result[][10], int rows, int cols){
    for (int i=0; i<rows;++i){
        for(int j=0; j<cols; ++j ){
            result[i][j]= A[i][j] - B[i][j];
        }
    }
}

void multiplymatrices(int A[][10], int B[][10], int result[][10], int rowsA, int colsA, int colsB){
    for(int i=0;i<rowsA;++i){
        for(int j=0; j<colsB; ++j){
            result[i][j]=0;
            for(int k=0;k<colsA;++k){
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}



int main() {
    int rowsA;
    int columnsA;
    int rowsB;
    int columnsB;

    // Get dimensions for first matrix
    cout << "Enter size of matrix 1" << endl;
    cout << "Rows of matrix 1: ";
    cin >> rowsA;
    cout << "Columns of matrix 1: ";
    cin >> columnsA;

    // Get dimensions for second matrix
    cout << "Enter size of matrix 2" << endl;
    cout << "Rows of matrix 2: ";
    cin >> rowsB;
    cout << "Columns of matrix 2: ";
    cin >> columnsB;

    // Ensure matrices can be added and subtracted
    if ((rowsA != rowsB) || (columnsA != columnsB)) {
        cerr << "Error: Matrices must have the same dimensions for addition and subtraction!\n";
        return 1;
    }

    // Ensure matrices can be multiplied
    if (columnsA != rowsB) {
        cerr << "Error: Number of columns of Matrix A must equal number of rows of Matrix B for multiplication!\n";
        return 1;
    }

   int A[10][10], B[10][10], result[10][10];

    inputMatrix(A, rowsA, columnsA);
    inputMatrix(B, rowsB, columnsB);

    // Display input matrices
    cout << "\nMatrix A:\n";
    displayMatrix(A, rowsA, columnsA);
    cout << "\nMatrix B:\n";
    displayMatrix(B, rowsB, columnsB);

    cout << "\nAddition Result:\n";
    addMatrices(A, B, result, rowsA, columnsA);
    displayMatrix(result, rowsA, columnsA);
    
    cout<<"\nSubtraction Result:\n";
    subtractmatrices(A,B,result,rowsA,columnsA);
    displayMatrix(result,rowsA,columnsA);

    cout<<"\nMultiplication Result:\n";
    multiplymatrices(A,B,result,rowsA,columnsA,columnsB);
    displayMatrix(result, rowsA, columnsB);

    return 0;
}
