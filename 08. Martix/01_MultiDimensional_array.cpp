#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m = 3, n = 2;

    // 1. Double Pointer Method (allocated on HEAP)
    /*    
    int **arr;
    arr = new int*[m];
    for (int i = 0; i < m; i++) {
        arr[i] = new int[n];
    }
    */

    // 2. Array of pointers (allocated on STACK)
    /*
    int *arr[m];
    for (int i = 0; i < m; i++) {
        arr[i] = new int[n];
    }
    */

    // 3. Array of Vectors
    /*
    vector<int> arr[m]; // use #include <vector>
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i].push_back(10); // This will print 10 in every row and column of the array
        }
    }
    */

    // 4. Vector of Vectors (number of rows can also be Dynamic)
    vector<vector<int>> arr; // use #include <vector>
    for (int i = 0; i < m; i++) {
        vector<int> v;
        for (int j = 0; j < n; j++) {
            v.push_back(10); // This will print 10 in every row and column of the array
            arr.push_back(v);
        }
    }

    // Uncomment the following loop to fill the array with different values
    // (comment this in case of vectors)
    /*
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = i + j;
        }
    }
    */

    // Printing the array
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << "  ";
        }
    }

    return 0;
}
