#include <iostream>
#include <vector>
using namespace std;

const int R = 3;
const int C = 3;

void printSnake(int mat[R][C])
{
    for (int i = 0; i < R; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < C; j++)
                cout << mat[i][j] << " ";
        }
        else
        {
            for (int j = C - 1; j >= 0; j--)
                cout << mat[i][j] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int mat[R][C] = {{1, 2, 3},
                     {4, 5, 6},
                      {7, 8, 9}};
    printSnake(mat);
    return 0;
}
