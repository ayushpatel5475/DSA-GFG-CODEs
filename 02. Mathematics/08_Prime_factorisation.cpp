#include <iostream>
#include <cmath>
using namespace std;

void printPrimeFactor(int n)
{
    if (n <= 1)
        return;
    while (n % 2 == 0)
    {
        cout << 2<<" ";
        n = n / 2;
    }
    while (n % 3 == 0)
    {
        cout << 3<<" ";
        n = n / 3;
    }

    for (int i = 5; i * i <= n; i = i + 6)
    {
        while (n % i == 0)
        {
            cout << i<<" ";
            n = n / i;
        }
        if (n % (i + 2) == 0)
        {
            cout << (i + 2)<<" ";
            n = n / (i + 2);
        }
    }
    if (n > 3)
        cout << n<<" ";
}

int main()
{
    int num;
    cout << "Enter a number to print its prime factors: ";
    cin >> num;
    cout << "Prime factors of " << num << " are: ";
    printPrimeFactor(num);
    return 0;
}
