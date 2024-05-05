#include <iostream>
using namespace std;

int remDups(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;

    int res = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[res - 1]) {
            arr[res] = arr[i];
            res++;
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

    int newSize = remDups(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
