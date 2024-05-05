#include <iostream>
using namespace std;

void print(int val) {
    cout << val << " ";
}

void leaders(int arr[], int n) {
    int curr_ldr = arr[n - 1];
    print(curr_ldr);
    for (int i = n - 2; i >= 0; i--) {
        if (curr_ldr < arr[i]) {
            curr_ldr = arr[i];
            print(curr_ldr);
        }
    }
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

    cout << "Leaders in the array: ";
    leaders(arr, n);
    cout << endl;

    return 0;
}
