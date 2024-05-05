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

int main() {
    int arr[] = {5, 2, 8, 3, 7, 1, 6, 4};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    lPartition(arr, 0, arr_size - 1);

    cout << "Array after partitioning: ";
    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}