#include <iostream>
using namespace std;
/*
//Naive Solution : O(n):
int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}
*/
// Efficient Approach ( Binary Search : O(log(n)))

int search(int arr[], int n, int x)
{ // like normal binary array
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return mid;
        // left half sorted   
        if (arr[low] < arr[mid])
        {
            if (x >= arr[low] && x < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        // Right half sorted
        {
            if (x > arr[mid] && x <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4, 5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 6;
    int index = search(arr, n, x);

    if (index != -1)
    {
        printf("Element %d found at index %d\n", x, index);
    }
    else
    {
        printf("Element %d not found in the array\n", x);
    }

    return 0;
}