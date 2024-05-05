#include <iostream>
#include <algorithm>
using namespace std;
/*
//naive solution : O (n^2)
int countInversion(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                res++;
        }
    }
    return res;
}
*/
int countandMerge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++) {
        left[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++) {
        right[i] = arr[m + 1 + i];
    }
    int res = 0, i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {arr[k] = left[i];i++;} 
        else {arr[k] = right[j];j++;
        res += (n1 - i);// Increment inversion count ( THE MAIN LINE)
        }
        k++;
    }
    while (i < n1) {arr[k] = left[i];i++;k++;}
    while (j < n2) {arr[k] = right[j]; j++;k++;}
    return res;
}

int countInversion(int arr[], int l, int r) {
    int res = 0;
    if (l < r) {
        int m = l + (r - l) / 2;
        res += countInversion(arr, l, m);
        res += countInversion(arr, m + 1, r);
        res += countandMerge(arr, l, m, r);
    }
    return res;
}

int main() {
    int arr[] = {40,30,20,10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int inversion_count = countInversion(arr, 0, arr_size - 1);
    cout << "Number of inversions: " << inversion_count << endl;

    return 0;
}
