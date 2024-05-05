#include <iostream>
#include <algorithm>
using namespace std;
/*
// naive Solution

void sort ( int arr[], int n){
    int  temp[n], i=0;
    for ( int j=0;j<n;j++)
        if ( arr[j]==0) { temp[i]=arr[j]; i++; }

    for ( int j=0;j<n;j++)
        if ( arr[j]==1){temp[i]=arr[j]; i++;}

    for ( int j=0;j<n;j++)
        if ( arr[j]==2){temp[i]=arr[j]; i++;}

    for ( int j=0;j<n;j++)
        arr[j]=temp[j];
}
*/

void sort ( int arr[], int n){
    int l=0, h=n-1, mid=0;
    while ( mid <=h){
        if ( arr[mid]==0)
        { // If 0 is encountered
            swap (arr[l], arr[mid]);
            l++;
            mid++;
        }   // If 1 is encountered
        else if ( arr[mid]==1)
            mid++;
        else {  // in case of 2 is encountered
            swap(arr[mid], arr[h]);
            h--;
        }
    }
}
int main() {
    int arr[] = {2, 1, 2, 0, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, n);

    cout << "Array after sorting 0s, 1s, and 2s: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}







