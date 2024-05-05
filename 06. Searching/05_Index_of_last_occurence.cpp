#include <iostream>
using namespace std;

int lastOccurence(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] < x)
            low = mid + 1;
        else if (arr[mid] > x)
            high = mid - 1;
        else
        //The edge to check for last occurence
        {
            if (mid != n - 1 && arr[mid] != arr[mid + 1])
                return mid;
            else
                low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {5, 10, 10, 20, 20, 20, 30, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 20;
    int result = lastOccurence(arr, n, x);
    if (result == -1)
    {
        cout << "NOT FOUND!";
    }
        else
        {
            cout << "the last Occurence of element is : " << result << "\n";
        }
    
}