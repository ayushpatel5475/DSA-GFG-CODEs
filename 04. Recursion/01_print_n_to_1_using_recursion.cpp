#include <iostream>
#include <cmath>
using namespace std;

void printN(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    printN(n - 1);
}
int main()
{
    int n =4;
    printN(n);
    return 0;
}