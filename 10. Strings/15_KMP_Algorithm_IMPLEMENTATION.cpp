#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


void fillLPS(string str, int lps[]) {
    int n = str.length(), len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < n) {
        if (str[i] == str[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len == 0) {
                lps[i] = 0;
                i++;
            } else {
                len = lps[len - 1];
            }
        }
    }
}


void KMP(const string& pat, const string& txt) {
    int N = txt.length();
    int M = pat.length();

     int* lps = new int[M];   // Dynamically allocate memory : TO avoid RED LINE
    fillLPS(pat, lps);

    int i = 0, j = 0;

    while (i < N) { 
        if (pat[j] == txt[i]) {j++;i++; //when pattern is matching
                    if (j == M) { //complete matched
                cout << "Pattern found at index " << i - j << endl;
                j = lps[j - 1];
            }
        } else {
            if (j != 0) {  // Go to LPS array and j=LPS(j-1)
                j = lps[j - 1];
            } else { // when do not match
                i++;
            }
        }
    }
}

int main() {
    string txt = "ababcababaad";
    string pat = "ababa";
    KMP(pat, txt);
    return 0;
}
