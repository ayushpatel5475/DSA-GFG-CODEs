#include <iostream>
#include <string>
#include <cmath>

using namespace std;
//Time complexity: theta ( 2^n * n)
void printPowerSet(string str) {
    int n = str.length();
    int powSize = pow(2, n);

    for (int counter = 0; counter < powSize; counter++) {
        for (int j = 0; j < n; j++) {
            if (counter & (1 << j)) 
                cout << str[j];
        }
        cout << "\n";
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << "The power set of the string is:\n";
    printPowerSet(input);
    return 0;
}
