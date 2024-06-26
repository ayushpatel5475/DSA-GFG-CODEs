
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


void insertionSort(int arr[], int n)
{
    for ( int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while ( j>=0 && arr[j]>key)  //if we put : arr[j]>=key : then this algo will become UNSTABLE
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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
    insertionSort(arr, n);
    print(arr, n);
}