#include <iostream>
using namespace std;

bool isPal(int n) {
    int rev = 0;
    int temp = n;

    while (temp != 0) {
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp = temp / 10;
    }
    return rev == n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPal(num))
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;
    return 0;
}
