#include <iostream>
#include <algorithm>
using namespace std;

/*
// Naive Solution: ( O(nlogn))

void merge ( int a[], int b[], int m , int n){

    int c[m+n];
    for ( int i=0;i<m;i++)
        c[i]=a[i];
    for ( int i=0;i<n;i++)
        c[m+i]=b[i];
    sort(c, c+m+n);
    for ( int i=0;i<(m+n);i++)
        cout<<c[i]<<" ";
}
*/

// Efficient Solution: O(n)
void merge(int a[], int b[], int m, int n)
{
    int i=0, j=0;
    while ( i<m && j<n){
        if (a[i]<=b[j]){
            cout<<a[i]<<" "; i++;}
            else    
                {cout<<b[j]<<" "; j++;}
    }
            while ( i<m){
            {cout<<a[i]<<" "; i++;}
            while ( j<n)
            {cout<<b[j]<<" "; j++;}
    }

}

int main()
{
    int a[] = {1, 3, 5, 7, 9};        // Sorted array a
    int b[] = {2, 4, 6};              // Sorted array b
    int m = sizeof(a) / sizeof(a[0]); // Size of array a
    int n = sizeof(b) / sizeof(b[0]); // Size of array b

    // Merge the arrays and print the result
    cout << "Merged array: ";
    merge(a, b, m, n);
    cout << endl;

    return 0;
}