#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int R = 3; // Define the number of rows
const int C = 3; // Define the number of columns
// Naive SOlution:
/*
void rotate90(int mat[R][C])
{
    int temp[R][C];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            temp[j][R - i - 1] = mat[i][j];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            mat[i][j] = temp[i][j];
}

*/

// Efficient SOlution : Space : O(1)
void rotate90(int mat[R][C]) {

    //transpose
    for (int i = 0; i < R; i++)
        for (int j = i + 1; j < R; j++)
            swap(mat[i][j], mat[j][i]);

    //Reverse Columns
    for (int i = 0; i < R; i++) {
        int low = 0, high = R - 1;
        while (low < high) {
            swap(mat[low][i], mat[high][i]);
            low++;
            high--;
        }
    }
}

int main()
{
    int mat[R][C] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    // Rotate the matrix by 90 degrees
    rotate90(mat);

    // Print rotated matrix
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    return 0;
}
