#include <iostream>
#include <algorithm>
using namespace std;
/*
// Naive Approach: 
void segregatePosNeg ( int arr[], int n ){
    int temp[n], i=0;

    for ( int j=0;j<n;j++){
        if ( arr[j]<0){
            temp[i]=arr[j];
            i++;
        }
    }

    for ( int j=0;j<n;j++){
        if (arr[j]>=0)
        {
            temp[i]=arr[j];
            i++;
        }
    }
    for ( int j=0;j<n;j++){
    arr[j]=temp[j];
    }
}

*/

//Effficient approach : 

void segregatePosNeg ( int arr[], int n ){
int i=-1, j=n;
while ( true){
    do { i++;} while ( arr[i]<0);
    do {j--;} while ( arr[j]>=0);

    if ( i>=j)
        return ;
        swap ( arr[i], arr[j]);
}
}
int main() {
    int arr[] = {4, -3, 5, -7, 2, 8, 9, -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    segregatePosNeg(arr, n);

    cout << "Array after segregating positive and negative numbers: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

