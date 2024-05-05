#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void patSearchDist(string &txt, string &pat)
{
    int n = txt.length();
    int m = pat.length();

    for (int i = 0; i <= n - m;)
    { // Note LAST term for loop is not given here, it is given inside loop
        int j;
        for (j = 0; j < m; j++)
            if (pat[j] != txt[i + j])
                break;
        if (j == m) // j==m : all match
            cout << (i )<< " ";
        if (j == 0)  // j==0 : END of the string?
            i++;
        else        // else: keep checking but shift as : i=i=+j
            i = (i + j);
    }
 
}

int main() {
    string txt = "ABCEABEFABCD";
    string pat = "ABCD";
    cout << "Pattern found at positions: ";
    patSearchDist(txt, pat);
    cout << endl;
    return 0;
}


