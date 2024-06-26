#include <iostream>
#include <algorithm>
#include <climits>

// Function prototype
int sum(int arr[], int b, int e);

int minPages(int arr[], int n, int k)
{
    if (k == 1)
        return sum(arr, 0, n - 1);
    if (n == 1)
        return arr[0];
    int res = INT_MAX;
    for (int i = 1; i < n; i++)
        res = std::min(res, std::max(minPages(arr, i, k - 1),
                                     sum(arr, i, n - 1)));
    return res;
}

int sum(int arr[], int b, int e)
{
    int s = 0;                   
    for (int i = b; i <= e; i++) 
        s += arr[i];
    return s; 
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; 

    std::cout << "Minimum pages: " << minPages(arr, n, k) << std::endl;

    return 0;
}
