#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void reverse(char str[], int low, int high) {
    while (low <= high) {
        swap(str[low], str[high]);
        low++;
        high--;
    }
}

void reverseWords(char str[], int n) {
    int start = 0;

    for (int end = 0; end < n; end++) {
        if (str[end] == ' ') {
            reverse(str, start, end - 1);
            start = end + 1;
        }
    }
    reverse(str, start, n - 1);
    reverse(str, 0, n - 1);
}

int main() {
    char str[] = "Welcome to Gfg";
    int n = sizeof(str) / sizeof(str[0]) - 1; // Subtract 1 to exclude the null terminator
    reverseWords(str, n);
    cout << "Reversed string: " << str << endl;

    return 0;
}
