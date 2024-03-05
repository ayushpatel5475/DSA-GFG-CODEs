#include <iostream>
#include <cmath>
using namespace std;

void printDivisors(int n)
{
    int i;
    for (i = 1; i * i < n; i++)
        if (n % i == 0)
            cout << i << " ";

    for (; i >= 1; i--)
        if (n % i == 0)
            cout << n / i << " ";
}

int main()
{
    int num;
    cout << "Enter a number to print its divisors: ";
    cin >> num;
    cout << "Divisors of " << num << " are: ";
    printDivisors(num);
    return 0;
}
