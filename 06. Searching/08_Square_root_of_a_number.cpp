#include <iostream>
using namespace std;
/*
// naive solution (O(root x))
int sqRootFloor(int x)
{
    int i = 1;
    while (i * i <= x)
        i++;
    return (i - 1);
}
*/

// Efficeint solution:  O(Logx)
int sqRootFloor(int x)
{
    int low = 1, high = x, ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int mSq = (mid * mid);
        if (mSq == x)
            return mid;
        else if (mSq > x)
            high = mid - 1;
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}
int main()
{
    int number = 14;
    int result = sqRootFloor(number);
    cout << "Square root floor of " << number << " is: " << result << endl;
    return 0;
}