#include <iostream>
using namespace std;

bool isPalindrome(string &str, int start, int end) {
    if (start >= end)
        return true;
    return (str[start] == str[end] && isPalindrome(str, start + 1, end - 1));
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isPalindrome(input, 0, input.length() - 1))
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}
