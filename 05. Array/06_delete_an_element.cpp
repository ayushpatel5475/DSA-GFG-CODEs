    #include <iostream>
    using namespace std;

int deleteElement(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x)
            break;
    }
    if (i == n)
        return n;

    for (int j = i; j < n - 1; j++)
        arr[j] = arr[j + 1];
    return (n - 1);
}

int main() {
    int n;
    cout << "Enter the current size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the element to delete: ";
    cin >> x;

    n = deleteElement(arr, n, x);

    cout << "Array after deletion:";
    for (int i = 0; i < n; ++i) {
        cout << " " << arr[i];
    }
    cout << endl;

    return 0;
}
