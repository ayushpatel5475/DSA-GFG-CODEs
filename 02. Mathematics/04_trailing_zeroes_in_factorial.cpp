#include <iostream>
#include <cmath>
using namespace std;

int countTrailingZeroes(int n)
{
    int res = 0; // Initialize res to 0
    for (int i = 5; i <= n; i = i * 5)
    {
        res = res + (n / i);
    }
    return res;

}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Number of trailing zeroes in " << num << "! is: " << countTrailingZeroes(num) << endl;
    return 0;
}
