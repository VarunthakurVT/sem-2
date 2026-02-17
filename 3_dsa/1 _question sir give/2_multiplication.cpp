#include <iostream>
#include <iomanip>  // for formatting output
using namespace std;

// Function to input a 3x3 matrix
void inputMatrix(int mat[3][3], string name) {
    cout << "Enter elements of matrix " << name << " (3x3):\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << name << "[" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }
}

// Function to display a 3x3 matrix
void displayMatrix(int mat[3][3], string name) {
    cout << "\nMatrix " << name << ":\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << setw(6) << mat[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to multiply two 3x3 matrices
void multiplyMatrix(int A[3][3], int B[3][3], int C[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            C[i][j] = 0;
            for(int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[3][3], B[3][3], C[3][3];  // C will store result

    cout << "=== 3x3 Matrix Multiplication Program ===\n\n";

    inputMatrix(A, "A");
    inputMatrix(B, "B");

    // Display both input matrices
    displayMatrix(A, "A");
    displayMatrix(B, "B");

    // Multiply matrices
    multiplyMatrix(A, B, C);

    // Display result
    cout << "\nResultant Matrix (A × B):\n";
    displayMatrix(C, "C");

    cout << "\nMultiplication Successful!\n";
    return 0;
}