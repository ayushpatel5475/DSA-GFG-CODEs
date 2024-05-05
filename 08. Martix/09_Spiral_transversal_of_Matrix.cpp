#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int mat[][3], int R, int C) { 
    int top = 0, left = 0, bottom = R - 1, right = C - 1;
    while (top <= bottom && left <= right) {
        // TOP ROW
        for (int i = left; i <= right; i++)
            cout << mat[top][i] << " ";
        top++;
        
        // RIGHT COLUMN
        for (int i = top; i <= bottom; i++)
            cout << mat[i][right] << " ";
        right--;
        
        // Bottom Row (REVERSE ORDER)
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                cout << mat[bottom][i] << " ";
            bottom--;
        }

        // LEFT Column (REVERSE ORDER)
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << mat[i][left] << " ";
            left++;
        }
    }
}

int main() {
    int mat[][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};

    // Print the matrix in spiral order
    print(mat, 3, 3);

    return 0;
}
