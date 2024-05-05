#include <iostream>
#include <algorithm>
using namespace std;

//THIS CODE NOT WORKING PROPERLY: Prefer Lomuto or Hoare Partition
void partition(int arr[], int l , int h, int p){

int temp[h-l+1], index=0;
for ( int i=l;i<=h;i++)
    if ( arr[i]<=arr[p])
        {temp[index]=arr[i]; index++;}

for ( int i=l;i<h;i++)
    if ( arr[i]>arr[p])
    {temp[index]=arr[i]; index++;}

for ( int i=l; i<=h;i++)
    arr[i]=temp[i-l];
}

int main() {
    int arr[] = {5, 2, 8, 3, 7, 1, 6, 4};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    partition(arr, 0, arr_size , 3 );

    cout << "Array after partitioning: ";
    for (int i = 0; i < arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}