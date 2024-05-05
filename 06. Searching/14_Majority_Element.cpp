#include <iostream>
#include <algorithm>
using namespace std;
/*
//Niave Approach : O ( n^2 )
int findMajority(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
            if (arr[i] == arr[j])
                count++;

        if (count > n / 2)
            return i;
    }
    return -1;
}
*/

// Efficient Solution : O(n):

int findMajority(int arr[], int n) // Find a candidate
{
    int res = 0, count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
            count++;
        else
            count--;
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }

    count = 0;

    for (int i = 0; i < n; i++) // Check if candidate is actially a majority
        if (arr[res] == arr[i])
            count++;
    if (count <= n / 2)
        res = -1;

    return res;
}

int main()
{
    int arr[] = {8, 3, 4, 8, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int majorityIndex = findMajority(arr, n);
    if (majorityIndex != -1)
        cout << "Majority element found at index " << majorityIndex << endl;
    else
        cout << "No majority element found" << endl;

    return 0;
}