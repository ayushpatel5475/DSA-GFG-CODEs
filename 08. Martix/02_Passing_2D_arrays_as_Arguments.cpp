#include <iostream>
#include <vector>
using namespace std;
// Using double Pointers:
/*
void print(int **arr, int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
}
int main()
{
    int **arr;
    int m = 3, n = 2;
    arr = new int *[m];

    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i;
            cout << arr[i][j] << " ";
        }
    }
    return 0;
}
*/

// 2. Using Array of POINTERs
/*
void print ( int *arr[], int m, int n){
    for ( int i=0;i<m;i++)
        for ( int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
}
main(){
    int m=3, n=2;
    int *arr[m];  //Array of POINTERs

    for ( int i=0;i<m;i++)
    {
        arr[i]=new int [n];
        for ( int j=0;j<n;j++)
        {
            arr[i][j]=i;
            cout<<arr[i][j]<<" ";
        }
    }
}
*/

// Using Array of Vectors:
/*
void print( vector<int> arr[], int m){
    for ( int i=0;i<m;i++)
        for ( int j=0;j<arr[i].size();j++)
            cout<<arr[i][j]<<" ";
}

main (){
    int m=3, n=2;
    vector <int> arr[m];

    for (int i=0;i<m;i++)
        for  (int j=0;j<n;j++)
            arr[i].push_back(i);
    print(arr,m);
    return 0;
}*/

void print(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
            cout << arr[i][j] << " ";
    }
}

int main (){
    int m=3, n=2;
    vector <vector<int>> arr;
    for ( int i=0;i<m;i++)
    {
        vector <int> v;
        for ( int j=0;j<n;j++)
            v.push_back(i);
    arr.push_back(v);
    }
    print(arr);
}
