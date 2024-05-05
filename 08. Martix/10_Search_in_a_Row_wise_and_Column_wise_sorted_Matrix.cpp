#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int R = 3; // Define the number of rows
const int C = 3; // Define the number of columns

/*
// Naive Solution: 
void search(int mat[R][C], int x) {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (mat[i][j] == x) {
                cout << "Found at (" << i << "," << j << ")" << endl;
                return;
            }
        }
    }
    cout << "NOT FOUND" << endl;
}
*/

// Efficient Solution : 
void search ( int mat[R][C], int x)
{
    int i=0, j=C-1;
    while ( i<R && j>=0)
        {
            if ( mat[i][j]==x)
            {
                cout << "Found at (" << i << "," << j << ")" << endl;
                return;
            }
            else if ( mat[i][j]>x)
                j--;
                else    i++;
        }
cout << "NOT FOUND" << endl;
}

int main() {
    int mat[R][C] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    int x = 5;
   search(mat, x);

    return 0;
}
