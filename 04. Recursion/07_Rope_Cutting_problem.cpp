#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int max(int a, int b, int c) {
    return max(max(a, b), c);
}

int maxPieces(int n, int a, int b, int c) {
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;

    int res = max(
        maxPieces(n - a, a, b, c),
        maxPieces(n - b, a, b, c),
        maxPieces(n - c, a, b, c)
    );
    if (res == -1)
        return -1;
    return res + 1;
}

int main() {
    int n, a, b, c;
    cout << "Enter the total length of the rod: ";
    cin >> n;
    cout << "Enter the lengths of the pieces a, b, and c: ";
    cin >> a >> b >> c;

    int maxPieceCount = maxPieces(n, a, b, c);
    if (maxPieceCount == -1)
        cout << "It's not possible to cut the rod into given lengths.";
    else
        cout << "The maximum number of pieces that can be obtained: " << maxPieceCount;

    return 0;
}
