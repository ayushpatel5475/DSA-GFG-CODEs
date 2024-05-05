#include <iostream>
using namespace std;
#include <math.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}
/*
// Naive approach: O(n^2): when all are 1.
int maxConsecutiveOnes(bool arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 1)
                curr++;
            else
                break;
        }
        res = max(res, curr);
    }
    return res;
}
*/

// efficient solution : O(n)#include <iostream>
using namespace std;

int maxConsecutiveOnes(bool arr[], int n)
{
    int res = 0;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            curr++;
            res = max(res, curr);
        }
        else
        {
            curr = 0;
        }
    }
    return res;
}

int main() {
    bool arr[] = {0,1,1,0,1,1,1}; // Sample boolean array
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum consecutive ones: " << maxConsecutiveOnes(arr, n) << endl;
    return 0;
}

