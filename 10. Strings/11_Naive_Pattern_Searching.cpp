#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void patSearching(string &txt, string &pat)
{
    int m = pat.length();
    int n = txt.length();
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
            if (pat[j] != txt[i + j])   // i- starting point and  i+j - shift from starting point
                break;
        if (j == m)
            cout << i << " ";
    }
}


int main() {
    string txt = "Geeksforgeeks";
    string pat = "eks";
    cout << "Pattern found at positions: ";
    patSearching(txt, pat);
    cout << endl;
    return 0;
}
