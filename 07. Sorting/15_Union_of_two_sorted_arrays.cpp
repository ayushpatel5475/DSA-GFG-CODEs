#include <iostream>
#include <algorithm>
using namespace std;
/*
// Niave Approach
void printUnion( int a[], int b[], int m, int n){
int c[m + n];
for(int i = 0; i < m; i++)
    c[i] = a[i];
for(int i = 0; i < n; i++)
    c[m + i] = b[i];
sort(c, c + m + n);

for (int i = 0; i < m + n; i++)
    if (i == 0 || c[i] != c[i - 1])
        cout << c[i] << " ";
}
*/
// Efficient approach
void printUnion( int a[], int b[], int m, int n){
int i=0, j=0;
while ( i<m && j<n){
    if ( i>0 && a[i]==a[i-1]){i++; continue;}
    if ( j>0 && b[j]==b[j-1]){j++; continue;}

    if ( a[i]<b[j]){cout<<a[i]<<" "; i++;}
    else if(a[i]>b[j]){cout<<b[j]<<" "; j++;}
    else {cout<<a[i]<<" "; i++;j++;}
    }
    while (i<m)
        if (i>0 && a[i]!=a[i-1]){cout<<a[i]<< " "; i++;}
        while ( j<n)
            if ( j>0 && b[j]!=b[j-1]){cout<<b[j]<<" ";j++;}
}
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Union of arrays: ";
    printUnion(arr1, arr2, size1, size2);
    cout << endl;

     return 0;
}