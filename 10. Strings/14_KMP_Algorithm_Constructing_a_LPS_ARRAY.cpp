#include <iostream>
#include <string>

#include <algorithm>
using namespace std;
//Naive: O(n^3)
int longPropPresuff(string str, int n){
    for(int len = n - 1; len > 0; len--){
        bool flag = true; 
        for(int i = 0; i < len; i++) {
            if(str[i] != str[n - len + i]) 
                flag = false;
        }
        if(flag == true)
            return len;
    }
    return 0;
}
/* //naive :
void fillLPS(string str, int lps[]){
    for(int i = 0; i < str.length(); i++)
        lps[i] = longPropPresuff(str, i + 1);
}
*/

//Optimized:

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

int main() {
    string pattern = "AAABAAAAC";
   // int lps[pattern.length()]; // RUN it no problem it is not Compilation error
         int* lps = new int[pattern.length()]; // Dynamically allocate memory
    fillLPS(pattern, lps);
    cout << "LPS array: ";
    for (int i = 0; i < pattern.length(); i++)
        cout << lps[i] << " ";
    cout << endl;
    return 0;
}
