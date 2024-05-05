#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool swapped;  // It is used to avoid Comparision after the Array is sorted in the middle ( FOR Efficeincy)

    for (int i = 0; i < n - 1; i++)
    {        swapped = false; 
        for (int j = 0; j < (n - i - 1); j++){  // also note that : n-i-1 is used for avoiding futher computations in same array if array is sorted once in previous step
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
            swapped = true;
        }
    
    if (swapped == false){ break; }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {10, 50, 60, 10, 30, 90, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    print(arr, n);
}