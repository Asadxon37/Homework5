#include <iostream>
#include <climits>

using namespace std;

int maxProfit(int prices[], int n) {
    int min_price = INT_MAX;
    int max_profit = 0;
    int min_day = -1;
    int buy_day = 0;
    int sell_day = 0;

    for (int i = 0; i < n; ++i) {
        if (prices[i] < min_price) {
            min_price = prices[i];
            min_day = i;
        } else {
            int profit = prices[i] - min_price;
            if (profit > max_profit) {
                max_profit = profit;
                buy_day = min_day;
                sell_day = i+1;
            }
        }
    }
    if (max_profit == 0) {
        return 0;
    }
    return sell_day;
}
int main() {
    int n;
    cin >> n;
    int prices[n];
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    int max_profit = maxProfit(prices, n);
    if (max_profit > 0) {
        cout << max_profit << endl;
    }if(max_profit == 0) {cout << 0 << endl;}
}
