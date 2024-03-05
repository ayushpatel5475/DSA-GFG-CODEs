#include <iostream>
using namespace std;

// naive
bool isPow2(int n)
{
    if (n == 0)
        return false;
    while (n != 1)
    {
        if (n % 2 != 0)
            return false;
        n = n / 2;
    }
    return true;
}

// Effective ( SINGLE LINE: Using Brian kerningum method)
bool isPow2(int n)
{
    if (n == 0)     ((n & (n - 1)) == 0);
}

int main()

{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPow2(num))
        cout << num << " is a power of 2." << endl;
    else
        cout << num << " is not a power of 2." << endl;
    return 0;
}