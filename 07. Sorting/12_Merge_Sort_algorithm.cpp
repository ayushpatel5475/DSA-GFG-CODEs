#include <iostream>
using namespace std;

void merge(int a[], int low, int mid, int high);

void mergeSort(int arr[], int l, int r) {
    if (r > l) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void merge(int a[], int low, int mid, int high) {
    int n1 = mid - low + 1, n2 = high - mid;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++) { left[i] = a[low + i]; }
    for (int i = 0; i < n2; i++) { right[i] = a[mid + 1 + i]; }

    // Standard Merge Logic
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) { a[k] = left[i]; i++; }
        else { a[k] = right[j]; j++; }
        k++;
    }
    while (i < n1) { a[k] = left[i]; i++; k++; }
    while (j < n2) { a[k] = right[j]; j++; k++; }
}

int main() {
    int arr[] = {10,5,30,15,7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array is: ";
    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, arr_size - 1);

    cout << "Sorted array is: ";
    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
