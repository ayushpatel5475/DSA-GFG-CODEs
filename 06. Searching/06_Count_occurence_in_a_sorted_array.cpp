#include <iostream>
using namespace std;

// Function prototypes
int firstOccurrence(int arr[], int n, int x);
int lastOccurrence(int arr[], int n, int x);
int countOcc(int arr[], int n, int x);

int main() {
    int arr[] = {5, 10, 10, 10, 20, 20, 20, 20, 30, 30, 40};
    int x = 20;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = countOcc(arr, n, x);
    cout << "The number of occurrences are: " << result << "\n";
    return 0;
}

int countOcc(int arr[], int n, int x) {
    int first = firstOccurrence(arr, n, x);
    if (first == -1)
        return 0;
    else
        return (lastOccurrence(arr, n, x) - first + 1);
}

int lastOccurrence(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] < x)
            low = mid + 1;
        else if (arr[mid] > x)
            high = mid - 1;
        else {
            // Check for last occurrence
            if (mid == n - 1 || arr[mid] != arr[mid + 1])
                return mid;
            else
                low = mid + 1;
        }
    }
    return -1;
}

int firstOccurrence(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else {
            // Check for first occurrence
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}
