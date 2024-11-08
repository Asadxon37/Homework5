#include <iostream>
using namespace std;

int maxProfit(int prices[],int n) {
    int min=INT_MAX;
    int max=0;

    for(int i=0;i<n;i++) {
        if(prices[i]<min) {
            min=prices[i];
        }
        int profit=prices[i]-min;
        if(profit>max) {
            max=profit;
        }
    }
    return max;
}

int main() {
    int n;
    cin>>n;
    int price[n];
    for(int i=0;i<n;i++) {
        cin>>price[i];
    }
    cout<<maxProfit(price,n)<<endl;
    return 0;
}