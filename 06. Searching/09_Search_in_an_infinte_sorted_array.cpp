#include <iostream>
using namespace std;
/*
//Naive Solution
int search(int arr[], int x)
{
    int i = 0;
    while (true)
    {
        if (arr[i] == x)
            return i;
        if (arr[i] > x)
            return -1;
        i++;
    }
}
*/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int search(int arr[], int x) {
    int i = 1;
    while (arr[i] < x)
        i = i * 2;

    if (arr[i] == x)
        return i;

    return binarySearch(arr, i / 2 + 1, i - 1, x);
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = search(arr, x);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found." << endl;
    return 0;
}














