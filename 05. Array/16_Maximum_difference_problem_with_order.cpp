#include <iostream>
using namespace std;

int maxDiff(int arr[], int n)
{
    int res = arr[1] - arr[0], minVal = arr[0];

    for (int j = 1; j < n; j++) // Fixed the loop variable j instead of i
    {
        res = max(res, arr[j] - minVal);
        minVal = min(minVal, arr[j]);
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int maxDifference = maxDiff(arr, n);
    cout << "Maximum difference between two elements in the array: " << maxDifference << endl;

    return 0;
}
