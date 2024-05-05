#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;
/*
int countDist( int arr[], int n){
    int res=0;
    for (int i=0;i<n;i++)
    {
        bool flag =false;
        for ( int j=0;j<i;j++)
        {
            if ( arr[i]==arr[j])
            {
                flag=true;
                break;
            }
        }
        if ( flag==false)
        res++;
    }
    return res;
}
*/

//Efficient:
/*

int countDist( int arr[], int n){
    unordered_set <int> s;
    for ( int i=0;i<n;i++)
        s.insert(arr[i]);
    return s.size();
}
*/
//More efficient:

int countDist( int arr[], int n){
    unordered_set <int> s(arr, arr+n);
    return s.size();
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5}; // Sample array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int distinctCount = countDist(arr, n); // Count the distinct elements
    cout << "Number of distinct elements: " << distinctCount << endl;
    return 0;
}