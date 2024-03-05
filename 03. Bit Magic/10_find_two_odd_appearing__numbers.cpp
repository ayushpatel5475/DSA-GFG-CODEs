#include <iostream>
using namespace std;

// naive solution ( O(n^2)):
/*
void oddAppearing ( int arr[], int n)
{
    for (int i =0;i<n;i++)
    {
        int count=0;

        for ( int j=0;j<n;j++)
            if ( arr[i]==arr[j])
                count++;
        if ( count %2 !=0)
            print(arr[i]);
    }
}

*/#include <iostream>
using namespace std;

void oddAppearing(int arr[], int n)
{
    int XOR = 0, res1 = 0, res2 = 0;
    for (int i = 0; i < n; i++)
    {
        XOR = XOR ^ arr[i];
    }

    int sn = XOR & ~(XOR - 1); // sn: denotes RightMost Set Bit

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & sn) != 0) // Corrected this condition
            res1 = res1 ^ arr[i];
        else
            res2 = res2 ^ arr[i];
    }
    cout << "Two odd appearing elements are: " << res1 << " " << res2 << endl; // Added spaces for readability
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    oddAppearing(arr, n);
    return 0;
}
