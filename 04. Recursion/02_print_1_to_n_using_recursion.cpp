#include <iostream>
#include <cmath>
using namespace std;

void printN(int n)
{
    if (n == 0)
        return;
    printN(n - 1);
    cout << n << " ";
  
}
int main()
{
    int n =4;
    printN(n);
    return 0;
}