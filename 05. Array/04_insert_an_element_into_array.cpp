#include <iostream>
using namespace std;

int insert(int arr[], int n, int x, int cap, int pos)
{
    if (n == cap)
        return n;

    int idx = pos - 1;

    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = x;
    return (n + 1);
}

int main()
{
    int n, cap, pos, x;
    cout << "Enter the current size of the array: ";
    cin >> n;

    cout << "Enter the capacity of the array: ";
    cin >> cap;

    if (n >= cap)
    {
        cout << "Array is already full. Cannot perform insertion." << endl;
        return 1;
    }

    int arr[cap];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to insert: ";
    cin >> x;

    cout << "Enter the position to insert at (1-based indexing): ";
    cin >> pos;

    if (pos < 1 || pos > n + 1)
    {
        cout << "Invalid position." << endl;
        return 1;
    }

    n = insert(arr, n, x, cap, pos);

    cout << "Array after insertion:";
    for (int i = 0; i < n; ++i)
    {
        cout << " " << arr[i];
    }
    cout << endl;

    return 0;
}
