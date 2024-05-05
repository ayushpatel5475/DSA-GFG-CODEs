#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define INF INT_MAX
/*
//NAIVE : 
int getMinDiff(int arr[], int n)
{
    int res = INF;
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            res = min(res, abs(arr[i] - arr[j]));
    return res;
}*/

// Efficient solution: 
int getMinDiff(int arr[], int n)
{
   
    sort(arr, arr + n);
    int res = INF;

    for (int i = 1; i < n; i++)
        res = min(res, arr[i] - arr[i - 1]);
    return res;
}
int main()
{
    int arr[] = {1, 5, 3, 19, 18, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum difference between any two elements in the array: " << getMinDiff(arr, n) << endl;

    return 0;
}
