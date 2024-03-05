#include <iostream>
#include <cmath>
using namespace std;

/*
//Naive Approach

int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
*/

// Recursive approach

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    int num;
    cout << "Enter a number to find its factorial: ";
    cin >> num;
    cout << "Factorial of " << num << " is: " << fact(num) << endl;
    return 0;
}
