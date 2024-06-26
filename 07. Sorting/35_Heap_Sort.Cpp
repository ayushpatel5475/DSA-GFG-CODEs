#include <iostream>
#include <algorithm>
using namespace std;

void heapify(int arr[], int n, int i);

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void heapify(int arr[], int n, int i) {
    int largest = i,
        left = 2 * i + 1,
        right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

int main() {
    int arr[] = {4, 10, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Original array: ";
    for (int i = 0; i < n; ++i) 
        cout << arr[i] << " ";
    cout << endl;

    heapSort(arr, n);

    cout << "Array after heap sort: ";
    for (int i = 0; i < n; ++i) 
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
