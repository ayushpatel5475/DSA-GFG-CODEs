#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
// Naive Approach: O(n^3)

bool areDistinct(string str, int i, int j) {
    vector<bool> visited(256);
    for (int k = i; k <= j; k++) {
        if (visited[str[k]] == true)
            return false;
        visited[str[k]] = true;
    }
    return true;
}

int longestDistinct(string str) {
    int n = str.length(), res = 0;
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if (areDistinct(str, i, j))
                res = max(res, j - i + 1);
    return res;
}
*/
/*
//BETTER SOLUTION: O(n^2):

int longestDistinct(string str)
{
    int n = str.length(), res = 0;
    for (int i = 0; i < n; i++){
        vector<bool> visited(256);
    for (int j = i; j < n; j++)
    {
        if (visited[str[j]] == true)
            break;
        else
        {
            res = max(res, j - i + 1);
            visited[str[j]] = true;
        }
    }}
    return res;
}
*/
 #include <iostream>
#include <string>
#include <vector>
using namespace std;

int longestDistinct(string str) {
    int n = str.length(), res = 0;
    vector<int> prev(256, -1); // Vector to store the previous occurrence index of each character
    int i = 0;
    for (int j = 0; j < n; j++) {
        i = max(i, prev[str[j]] + 1); // Update i to the next index after the previous occurrence of str[j]
        int maxEnd = j - i + 1; // Length of current substring with all distinct characters
        res = max(res, maxEnd); // Update the result if necessary
        prev[str[j]] = j; // Update the index of the most recent occurrence of str[j]
    }
    return res;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    int length = longestDistinct(input);
    cout << "Length of longest substring with all distinct characters: " << length << endl;

    return 0;
}
