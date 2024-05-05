#include <iostream>
using namespace std;

int secondLargest(int arr[], int n) {
    int res = -1, largest = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[largest]) {
            res = largest;
            largest = i;
        } else if (arr[i] != arr[largest]) {
            if (res == -1 || arr[i] > arr[res])
                res = i;
        }
    }
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

    int secondLargestIndex = secondLargest(arr, n);
    if (secondLargestIndex != -1)
        cout << "The second largest element is at index: " << secondLargestIndex << endl;
    else
        cout << "There is no second largest element in the array." << endl;

    return 0;
}
