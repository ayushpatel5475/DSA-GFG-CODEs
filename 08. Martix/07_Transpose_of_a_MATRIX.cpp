#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int n = 3; // Define the size of the matrix as a constant

/*
// Naive Solution: using temp array
void transpose(int mat[n][n]) {
    int temp[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[i][j] = mat[j][i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            mat[i][j] = temp[i][j];
}

*/

// Efficient Solution: Using INPLACE and ONE TRAVERSAL
void transpose(int mat[n][n]) {
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            swap(mat[i][j], mat[j][i]); // Swap the elements across the diagonal
}

// Function to print a matrix
void printMatrix(int mat[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int mat[n][n] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Print original matrix
    cout << "Original Matrix:" << endl;
    printMatrix(mat);

    // Transpose the matrix
    transpose(mat);

    // Print transposed matrix
    cout << "\nTransposed Matrix:" << endl;
    printMatrix(mat);

    return 0;
}
