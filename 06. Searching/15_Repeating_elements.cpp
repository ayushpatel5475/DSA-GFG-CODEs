#include <iostream>
#include <algorithm>

// Super Naive solution : O ( n^2) time and O(1) space

/*
for ( int i=0;i<n-1;i++)
{
    for ( int j=i+1;j<n;j++){
        if ( arr[i]==arr[j])
            return arr[i];
    }
}

//naive solution : O (nlogn) time and O(1) space
1. Sort the array
2. for ( int i=0;i<n-1;i++)
    if ( arr[i]==arr[i+1])
        return arr[i];

//Efficeint approach : O(n)time and O(n) space

arr[]={0,2,1,3,2,2}

1. create a boolean array of size n
    visited[]={F,F,F,F,F,F};
2. for ( int i=0;i<n;i++){
    if ( visited [arr[i]])
        return arr[i]
    visited [arr[i]]==true;
}

*/

// Finally the solution for : O (n) time and O(1) : SPACE
#include <iostream>

int findRepeating(int arr[], int n) {
    int slow = arr[0], fast = arr[0];
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    slow = arr[0];

    while (slow != fast) {
        fast = arr[fast];
        slow = arr[slow];
    }
    return slow;
}

int main() {
    int arr[] = {1,3,2,4,6,5,7,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int repeatingElement = findRepeating(arr, n);

    std::cout << "The repeating element is: " << repeatingElement << std::endl;

    return 0;
}
