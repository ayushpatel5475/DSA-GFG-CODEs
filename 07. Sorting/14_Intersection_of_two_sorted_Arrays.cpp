#include <iostream>
using namespace std;
/*
//naive approach 
void intersection( int a[], int b[], int m, int n){
    for ( int i=0;i<m;i++)
    {
        if ( i>0 && a[i]==a[i-1])
            continue;
        for ( int j=0;j<n;j++){
            if ( a[i]==b[j]){
                cout<<a[i]<<" ";
                break;
            }
        }
    }
}

*/
//Efficinet aaproach: Using MERGE
void intersection( int a[], int b[], int m, int n){
int i=0, j=0;
while ( i<m && j<n){
    if ( i>0 && a[i]==a[i-1]) {i++; continue;}
    if ( a[i]<b[j]){i++;}
    if ( a[i]>b[j]){ j++;}
    else{ cout<<a[i]<<" "; i++; j++;}
    }
}

int main() {
    int arr1[] = {1, 2, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 5, 6};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Intersection of arrays: ";
    intersection(arr1, arr2, size1, size2);
    cout << endl;

    return 0;
}