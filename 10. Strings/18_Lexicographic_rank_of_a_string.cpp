#include <iostream>
#include <string>

using namespace std;

const int CHAR = 256;

// Function to calculate factorial
int fact(int n) {
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}

// Function to calculate lexicographic rank
int lexRank(string &str) {
    int res = 1;
    int n = str.length();
    int mul = fact(n);
    int count[CHAR] = {0};

    for (int i = 0; i < n; i++)
        count[str[i]]++;

    for (int i = 1; i < CHAR; i++)
        count[i] += count[i - 1];

    for (int i = 0; i < n - 1; i++) {
        mul = mul / (n - i);
        res = res + count[str[i] - 1] * mul;

        for (int j = str[i]; j < CHAR; j++)
            count[j]--;
    }

    return res;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    cout << "Lexicographic rank: " << lexRank(input) << endl;

    return 0;
}
