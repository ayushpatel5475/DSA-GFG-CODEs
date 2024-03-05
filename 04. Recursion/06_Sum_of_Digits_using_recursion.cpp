#include <iostream>
using namespace std;

int getSum(int n) {
    if (n == 0)
        return 0;
    else
        return getSum(n / 10) + n % 10;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    cout << "Sum of digits of " << num << " is: " << getSum(num) << endl;

    return 0;
}
