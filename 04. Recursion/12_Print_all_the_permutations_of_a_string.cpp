#include <iostream>
using namespace std;

void permute(string s, int i = 0) {
    if (i == s.length() - 1) {
        cout << s << " ";
        return;
    }
    for (int j = i; j < s.length(); j++) {
        swap(s[i], s[j]);
        permute(s, i + 1);
        swap(s[i], s[j]);
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    cout << "Permutations of the string are: ";
    permute(input);
    cout << endl;

    return 0;
}
