#include <iostream>
using namespace std;
/*
// naive solution:

int getPeak(int arr[], int n)
{
      if (n == 0)
        return -1; // Return -1 if array is empty


    if (n == 1)
        return arr[0];
    if (arr[0] >= arr[1])
        return arr[0];
    if (arr[n - 1] >= arr[n - 2])
        return arr[n - 1];

    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
            return arr[i];
    }
return -1;
}
*/

int getPeak(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid = n - 1 || arr[mid + 1] <= arr[mid]))
        {
            return mid;
        }
        if (mid > 0 && arr[mid - 1] >= arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return;
}

int main()
{
    int arr[] = {10, 7, 8, 20, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int peak = getPeak(arr, n);

    cout << "Peak element is: " << peak << endl;

    return 0;
}