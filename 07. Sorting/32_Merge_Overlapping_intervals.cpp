#include <iostream>
#include <algorithm>
using namespace std;
struct Interval
{
    int st, end;
};
bool myComp(Interval a, Interval b) {
    return a.st < b.st;
}

void
mergeIntervals(Interval arr[], int n)
{
    sort(arr, arr + n, myComp);
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[res].end >= arr[i].st)
        {
            arr[res].end = max(arr[res].end, arr[i].end);
            arr[res].st = min(arr[res].st, arr[i].st);
        }
        else
        {
            res++;
            arr[res] = arr[i];
        }
    }
    for ( int i=0;i<=res;i++)
        cout<< arr[i].st<<" "<<arr[i].end <<endl;
}

int main() {
    Interval arr[] = {{7,9},{6,10},{4,5},{1,3},{2,4}};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Merged intervals:" << endl;
    mergeIntervals(arr, n);

    return 0;
}