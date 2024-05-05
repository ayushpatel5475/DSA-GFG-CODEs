#include <iostream>
#include <algorithm>
using namespace std;

/*
//Naive Approach : O( n^2 ):
int maxCircularSum(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int curr_max = arr[i];
        int  curr_sum = arr[i];

        for (int j = 1; j < n; j++)
        {
            int index = (i + j) % n;
            curr_sum += arr[index];
            curr_max = max(curr_max, curr_sum);
        }
        res = max(res, curr_max);
    }
    return res;
}

*/

// Standard Kadanes Algorithm:
int normalMaxSum(int arr[], int n) {
    int res = arr[0], maxEnding = arr[0];
    for (int i = 1; i < n; i++) {
        maxEnding = max(arr[i], maxEnding + arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}
//The main function
int overallMaxSum(int arr[], int n) {
    int max_normal = normalMaxSum(arr, n);  // Normal Sum
    if (max_normal < 0)
        return max_normal;
    
    // Circular Sum:
    int arr_sum = 0;
    for (int i = 0; i < n; i++) {
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int max_circular = arr_sum + normalMaxSum(arr, n);
    return max(max_normal, max_circular);
}

int main() {
    int arr[] = {5,-2,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
  //  cout << "Maximum circular sum: " << maxCircularSum(arr, n) << endl;
   
    cout << "Maximum circular sum of the given array is " << overallMaxSum(arr, n) << endl;
    return 0;
}
