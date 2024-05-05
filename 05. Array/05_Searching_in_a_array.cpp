#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the value to search for: ";
    cin >> x;

    int result = search(arr, n, x);
    if (result != -1)
        cout << "Element " << x << " found at index " << result << endl;
    else
        cout << "Element " << x << " not found in the array." << endl;

    return 0;
}
