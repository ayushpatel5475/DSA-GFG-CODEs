#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
/* //NAIVE SOLUTION
bool areAnagram(const string &s1, const string &s2) {
    if (s1.length() != s2.length())
        return false;

    unordered_map<char, int> count;

    for (char c : s1)
        count[c]++;

    for (char c : s2) {
        if (count.find(c) == count.end() || count[c] == 0)
            return false;
        count[c]--;
    }

    return true;
}

bool isPresent(const string &txt, const string &pat) {
    int n = txt.length();
    int m = pat.length();

    for (int i = 0; i <= n - m; i++) {
        if (areAnagram(pat, txt.substr(i, m)))
            return true;
    }
    return false;
}
*/

using namespace std;

const int CHAR = 256;

bool areSame(const int CT[], const int CP[]) {
    for (int i = 0; i < CHAR; i++) {
        if (CT[i] != CP[i])
            return false;
    }
    return true;
}

bool isPresent(const string &txt, const string &pat) {
    int CT[CHAR] = {0}, CP[CHAR] = {0};
    for (int i = 0; i < pat.length(); i++) {
        CT[txt[i]]++;
        CP[pat[i]]++;
    }
    for (int i = pat.length(); i < txt.length(); i++) {
        if (areSame(CT, CP))
            return true;
        CT[txt[i]]++;
        CT[txt[i - pat.length()]]--;
    }
    return false;
}

int main() {
    string txt = "BACDGABCDA";
    string pat = "ABCD";

    if (isPresent(txt, pat))
        cout << "Anagram found" << endl;
    else
        cout << "Anagram not found" << endl;

    return 0;
}
