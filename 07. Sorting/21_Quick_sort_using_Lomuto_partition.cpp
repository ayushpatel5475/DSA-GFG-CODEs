#include <iostream>
#include <algorithm>
using namespace std;

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

void qSort ( int arr[], int l, int h){
    if ( l<h)
    {
        int p =lPartition( arr, l, h);

        qSort( arr, l, p-1);
        qSort( arr, p+1,h);
    }
}

int main() {
    int arr[] = {8,4,7,9,3,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array:";
    for (int i = 0; i < n; i++) {
        cout << " " << arr[i];
    }
    cout << endl;

    qSort(arr, 0, n-1);

    cout << "Sorted array:";
    for (int i = 0; i < n; i++) {
        cout << " " << arr[i];
    }
    cout << endl;

    return 0;
}