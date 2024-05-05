#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//Iterative:
//O(m+n)
bool isSubSeq( string s1, string s2, int n, int m)
{
    int j=0;
    for ( int i=0;i<n && j<m ;i++)
    {
        if ( s1[i]== s2[j])
            j++;
    }
    return (j==m);
}

//Recursive 

bool isSubSeqRec( string s1, string s2, int n, int m)
{
if ( m==0)
    return true;
if ( n==0)
    return false;

if ( s1[n-1]==s2[m-1])
    return isSubSeqRec( s1, s2, n-1, m-1);
else    
    return isSubSeqRec(s1,s2, n-1, m);
}
 
int main() {
    string s1 = "abcde";
    string s2 = "ace";
    int n = s1.length();
    int m = s2.length();

    // Using iterative function
    if (isSubSeq(s1, s2, n, m))
        cout << "Iterative: Yes, " << s2 << " is a subsequence of " << s1 << endl;
    else
        cout << "Iterative: No, " << s2 << " is not a subsequence of " << s1 << endl;

    // Using recursive function
    if (isSubSeqRec(s1, s2, n, m))
        cout << "Recursive: Yes, " << s2 << " is a subsequence of " << s1 << endl;
    else
        cout << "Recursive: No, " << s2 << " is not a subsequence of " << s1 << endl;

    return 0;
}