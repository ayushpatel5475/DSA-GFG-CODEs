#include <iostream>
using namespace std;

int countSubsets(int arr[], int n, int sum) {
    if (n == 0) {
        return (sum == 0) ? 1 : 0;
    }
    return (countSubsets(arr, n - 1, sum) + countSubsets(arr, n - 1, sum - arr[n - 1]));
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

    int sum;
    cout << "Enter the target sum: ";
    cin >> sum;

    int count = countSubsets(arr, n, sum);
    cout << "Number of subsets with sum " << sum << ": " << count << endl;

    return 0;
}
