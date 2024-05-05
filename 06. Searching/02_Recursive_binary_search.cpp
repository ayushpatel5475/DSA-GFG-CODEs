#include <iostream>
using namespace std;
int recBsearch(int arr[], int low, int high, int x) {
    if (low > high)   //NOT EQUAL*****
        return -1;
    
    int mid = low + (high - low) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
        return recBsearch(arr, low, mid - 1, x);
    else
        return recBsearch(arr, mid + 1, high, x);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 13;
    int result = recBsearch(arr, 0, n - 1, x);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}