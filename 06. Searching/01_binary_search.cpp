#include <iostream>
using namespace std;

int bsearch(int arr[], int n, int x){
    int low=0, high=n-1;
    while ( low<=high)
    {
        int mid=(low+high)/2;
        if ( arr[mid]==x)
            return mid;
        else if ( arr[mid]>x)
            high =mid-1;
        else    low=mid+1;
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 13;
    int result = bsearch(arr, n, x);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}