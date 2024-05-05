#include <iostream>
#include <vector>

using namespace std;

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int min(int a, int b)
{
    return (a < b) ? a : b;
}
/*
// Naive approach to calculate trapped water : Theta ( n^2)
int getWater(int arr[], int n)
{
    int res = 0;
    // for finding lMax
    for (int i = 1; i < n - 1; i++)
    {
        int lMax = arr[i];
        for (int j = 0; j < i; j++)
            lMax = max(lMax, arr[j]);

        // for finding rMax
        int rMax = arr[i];
        for (int j = i + 1; j < n; j++)
            rMax = max(rMax, arr[j]);

        res += (min(lMax, rMax) - arr[i]);
    }
    return res;
}
*/

//Efficient solution : O(n)
//Idea is to precompute left max and right max

int getWater(int arr[], int n) {
    int res = 0;
    vector<int> lMax(n), rMax(n);

    lMax[0] = arr[0];
    for (int i = 1; i < n; i++) {
        lMax[i] = max(lMax[i - 1], arr[i]); // Initialize lMax array
    }

    rMax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rMax[i] = max(rMax[i + 1], arr[i]); // Initialize rMax array
    }

    for (int i = 1; i < n - 1; i++) {
        res += (min(lMax[i], rMax[i]) - arr[i]);
    }

    return res;
}

int main() {
    int arr[] = {3, 0, 1, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Trapped water: " << getWater(arr, n) << endl;
    return 0;
}

