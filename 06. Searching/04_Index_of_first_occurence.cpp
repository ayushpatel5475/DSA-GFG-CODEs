#include <iostream>
using namespace std;

// naive solution: ( O(n))
/*
int firstOccurence(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
*/
/*
//RECURSIVE BINARY SOLUTION : SPace ( O(logn))
// using binary search : O(logn): but array must be sorted
int firstOccurence(int arr[], int low, int high, int x)
{                   // using binary
    if (low > high) // NOT EQUAL*****
        return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] > x)
        return firstOccurence(arr, low, mid - 1, x);
    else if (x > arr[mid])
        return firstOccurence(arr, mid + 1, high, x);
    // now the extra this part
    else
    {
        if (mid == 0 || arr[mid - 1] != arr[mid])
            return mid;
        else
            return firstOccurence(arr, low, mid - 1, x);
    }
}
*/

// ITERATIVE Binary Search: O(1): Space
//  using binary search : O(logn): but array must be sorted
int firstOccurence(int arr[],int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else
        { //The EDGE case to check if it first occrence
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {5, 10, 10, 15, 20, 20, 20};
    int x = 20;
    int result;
    int n = sizeof(arr) / sizeof(arr[0]);
    result = firstOccurence(arr, n, x);  // in case of naive solution and Iterative binary search
    // result = firstOccurence(arr, 0, n - 1, x); //in case of Recursive binary search
    cout << "First occurence is found at index:" << result << "\n";
}