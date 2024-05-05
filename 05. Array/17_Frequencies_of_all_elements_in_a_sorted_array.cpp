#include <iostream>
using namespace std;

void printFreq(int arr[], int n)
{
    int freq = 1, i = 1;
    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " " << freq << "\n ";
        i++;
        freq = 1;
    }
    if (n == 1 || arr[n - 1] != arr[n - 2])
        cout << arr[n - 1] << " " << 1;
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

    cout << "Frequency of elements in the array: ";
    printFreq(arr, n);
    cout << endl;

    return 0;
}
