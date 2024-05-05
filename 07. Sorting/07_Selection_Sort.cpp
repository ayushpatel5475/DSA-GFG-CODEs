#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

const int INF = 1e9; //  10^9

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int min_ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
                min_ind = j;
        }
        swap(arr[min_ind], arr[i]);
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
    selectionSort(arr, n);
    print(arr, n);
}