#include <iostream>
using namespace std;

int maxProfit(int price[], int n) {
    int profit = 0;
    for (int i = 1; i < n; i++) {
        if (price[i] > price[i - 1]) {
            profit += (price[i] - price[i - 1]);
        }
    }
    return profit;
}

int main() {
    int n;
    cout << "Enter the number of days: ";
    cin >> n;

    int price[n];
    cout << "Enter the prices for each day: ";
    for (int i = 0; i < n; ++i) {
        cin >> price[i];
    }

    int totalProfit = maxProfit(price, n);
    cout << "Total maximum profit: " << totalProfit << endl;

    return 0;
}
