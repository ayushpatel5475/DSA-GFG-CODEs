#include <iostream>
#include <cmath>
using namespace std;

int gcd (int a, int b)
{
    if ( b==0)
        return a;
    else    
        return gcd(b, a%b);
}

int lcm ( int a, int b)
{
    return ((a*b)/gcd(a,b));
}


int main()
{
    int num1, num2;
    cout << "Enter two numbers to find their LCM ";
    cin >> num1 >> num2;
    cout << "lcm of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) << endl;
    return 0;
}