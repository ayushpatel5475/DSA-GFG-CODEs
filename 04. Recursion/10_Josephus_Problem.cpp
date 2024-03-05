#include <iostream>
using namespace std;

int jos(int n, int k) {
    if (n == 1)
        return 0;
    else
        return ((jos(n - 1, k) + k) % n);
}

int main() {
    int n, k;
    cout << "Enter the number of people (n): ";
    cin >> n;
    cout << "Enter the step size (k): ";
    cin >> k;

    int survivor = jos(n, k) + 1; // Adding 1 to convert from 0-indexed to 1-indexed
    cout << "The SURVIOUR PERSON is at position: " << survivor << endl;

    return 0;
}
