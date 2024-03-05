#include <iostream>
using namespace std;

// Naive approach
int countSetBits(int n)
{
    // for checking last bit is set or not
    int res = 0;
    while (n > 0)
    {
        if (n % 2 != 0) //  OR: if ( (n&1)==1)
        {
            res++;
            // Now for Removing the last bit:
            n = n / 2; // OR:  n=n>>1;
        }
    
    }
    
    return res ;
}
 
// Brian Kerningam Algrithm
int countSetBits(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        res++;
    }
    return res;
}


int main()
{
     int n;
    cout << "Enter a number: ";
    cin >> n;
    int numSetBits = countSetBits(n);
    cout << "Number of set bits in " << n << " is: " << numSetBits << endl;
    return 0;
}