#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
// naive : Rotate and Check each Time O( n^2 )

// efficient using : Searching algorithm: Search in CIRCULAR WAY

bool areRotations(string &s1, string &s2)
{

    if (s1.length() != s2.length())
        return false;
    return ((s1 + s2).find(s2) != string ::npos);
}

 
int main() {
    string s1 = "abcd";
    string s2 = "cdab";

    if (areRotations(s1, s2))
        cout << "Yes, " << s2 << " is a rotation of " << s1 << endl;
    else
        cout << "No, " << s2 << " is not a rotation of " << s1 << endl;

    return 0;
}