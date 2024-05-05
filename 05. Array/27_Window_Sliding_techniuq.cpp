#include <iostream>
#include <algorithm>
using namespace std;
/*
int max_sum = INT_MIN;
void WST(int arr[], ) for (int = 0; (i + k - 1) < n; i++)
{
    int sum = 0;

    for (int j = 0; j < k; j++)
        sum += arr[i + j];
    max_sum = max(sum, max_sum);
}
return max_sum;
*/
/*


int max_sum = INT_MIN;

int arr_sum = 0;
for (int i = 0; i < k; i++)
    curr_sum += arr[i];
int max_sum = curr_sum;
for (int i = k; i < n; i++)
{
    curr_sum += (arr[i] - arr[i - k]);
    max_sum = max(max_sum, curr_sum);
}
return max_sum;

*/
/*

bool isSubSum(innt arr[], int n, int sum)
{
    int curr_sum = arr[0], s = 0;
    for (int e = 1; e < n; e++)
    {
        // clean the prev window
        while (curr_sum > sum && s < (e - 1))
        {
            curr_sum -= arr[start];
            s++;
        }
        if (curr_sum == sum)
            return true;
        if (e > n)
            curr_sum = +arr[e];
       
    }
     return curr_sum == sum;
}
*/   