#include <iostream>
using namespace std;
/*
//niave solution ( O(n^2)):
int maxEvenIdd(int arr[], int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        int curr = 1;
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[j] % 2 == 0 && arr[j - 1] % 2 != 0) ||
                (arr[j] % 2 != 0 && arr[j - 1] % 2 == 0))
                curr++;
            else
                break;
        }
        res = max(res, curr);
    }
    return res;
}
*/

int maxEvenIdd(int arr[], int n)
{
    int res = 1;
    int curr = 1;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) ||
            (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
        {
            curr++;
            res = max(res, curr);
        }
        else
            curr = 1;
    }
    return res;
}
int main()
{
    int arr[] = {10, 12, 14, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of the longest alternating even-odd subarray: " << maxEvenIdd(arr, n) << endl;
    return 0;
}
