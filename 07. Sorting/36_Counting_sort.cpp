#include <iostream>
#include <algorithm>
using namespace std;

void countSort(int arr[], int n, int k)
{
    int *count = new int[k]; // Dynamically allocate memory
    for (int i = 0; i < k; i++)
        count[i] = 0;
    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    for (int i = 1; i < k; i++)
        count[i] += count[i - 1];

    int *output = new int[n]; // Dynamically allocate memory
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < n; i++)
        arr[i] = output[i];

    // Free dynamically allocated memory
    delete[] count;
    delete[] output;
}

int main()
{
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 10; // Assuming the range of elements is from 0 to 9
    countSort(arr, n, k);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
