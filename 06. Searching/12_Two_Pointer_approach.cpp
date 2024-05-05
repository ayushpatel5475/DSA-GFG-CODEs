#include <iostream>
using namespace std;

bool isPair(int arr[], int left, int right, int x); // Declaration modified for isPair function
bool isTriplet(int arr[], int n, int x);

/*
//naive approach: O (n^2):
bool isPair(int arr[], int n, int x)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
                return true;
        }
    }
    return false;
}
*/
// Using Hasing : O(1): IF ARRAY IS Un Sorted

// Using Two Pointer Approach : If array is SORTED

bool isPair(int arr[], int left, int right, int x) {
    while (left < right) {
        if (arr[left] + arr[right] == x)
            return true;
        else if (arr[left] + arr[right] > x)
            right--;
        else
            left++;
    }
    return false;
}


/*
//FOR TRIPLET :
//naive approach: O(n ^3)
bool isTriplet( int arr[], int n, int x){
for ( int i=0;i<n;i++){
    for ( int j=i+1; j<n;j++){
        for ( int k=j+1;k<n;k++){
            if ( arr[i]+arr[k]+arr[k]==x){
                return true;
            }
        }
    }
return false;
}
}
*/
// efficient Approach : O (n^2):

bool isTriplet(int arr[], int n, int x) {
    for (int i = 0; i < n - 2; i++) { // Adjusted loop range
        if (isPair(arr, i + 1, n - 1, x - arr[i]))
            return true;
    }
    return false;
}
int main() {
    // Example array (assumed to be sorted)
    int arr[] = {2, 4, 8, 9, 11, 12, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int target_sum = 23;                  // Target sum to find pairs for

    // Call the isPair function
    bool hasPair = isPair(arr, 0, n - 1, target_sum);

    // Display the result
    if (hasPair) {
        cout << "There exists a pair that sums up to " << target_sum << "." << endl;
    } else {
        cout << "No pair found that sums up to " << target_sum << "." << endl;
    }

    // Call the isTriplet function
    bool hasTriplet = isTriplet(arr, n, target_sum);

    // Display the result
    if (hasTriplet) {
        cout << "There exists a triplet that sums up to " << target_sum << "." << endl;
    } else {
        cout << "No triplet found that sums up to " << target_sum << "." << endl;
    }

    return 0;
}