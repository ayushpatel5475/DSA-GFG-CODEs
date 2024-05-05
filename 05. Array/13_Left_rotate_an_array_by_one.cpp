#include <iostream>
using namespace std;

void lRotateOne(int arr[], int n) {
    int temp = arr[0];
    for (int i = 1; i < n; i++)
        arr[i - 1] = arr[i];
    arr[n - 1] = temp;
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

    lRotateOne(arr, n);

    cout << "Array after left rotation by one position: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
