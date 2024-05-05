#include <iostream>
#include <algorithm>
using namespace std;
// naive approach:
/*
int kthSmallest ( int arr[], int n, int k){
    sort( arr, arr+n);
    return arr[k-1];
}

*/


int lPartition( int arr[], int low, int high){
    int pivot =arr[high]; //Always Last element is chosen as PIVOT
    int i=low-1;
    for (int j=low; j<=high -1; j++){
        if ( arr[j]<pivot )
        {
            i++;
            swap(arr[i], arr[j]);
        }
            }

swap(arr[i+1], arr[high]);
return (i+1);
}
//The main funcion: 
int kthSmallest(int arr[], int n, int k)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int p = lPartition(arr, l, r);
        if (p == k - 1)
            return p;
        else if (p > k - 1)
            r = p - 1;
        else
            l = p + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {10,4,5,8,11,6,26};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;
    cout << "Kth smallest element is " << kthSmallest(arr, n, k);
    return 0;
}
