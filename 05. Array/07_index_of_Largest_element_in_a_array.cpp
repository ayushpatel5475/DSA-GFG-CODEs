#include <iostream>
using namespace std;

int getLargest(int arr[], int n) {
    int res = 0;
    for (int i = 1; i < n; i++)
        if (arr[i] > arr[res])
            res = i;
    return res;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int largestIndex = getLargest(arr, n);
    cout << "The largest element is at index: " << largestIndex << endl;

    return 0;
}
