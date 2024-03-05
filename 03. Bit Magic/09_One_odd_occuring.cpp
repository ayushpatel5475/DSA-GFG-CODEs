#include <iostream>
using namespace std;

// naive approach : O( n^2 )
/*
int findOdd( int arr[], int n)
{
    for (int i = 0; i < n; i++)
{
    int count = 0;
    for (int j = 0; j < n; j++)
        if (arr[j] == arr[i])
            count++;
    if (count % 2 != 0)
        print(arr[i]);
}

}
*/
/*
Using XOR operator: 

*/
int findOdd( int arr[], int n)
{
    int res=0;
    for ( int i=0;i<n;i++)
        res=res ^ arr[i];
    return res;
}


int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int oddElement = findOdd(arr, n);
    cout << "The odd occurring element in the array is: " << oddElement << endl;
    return 0;
}