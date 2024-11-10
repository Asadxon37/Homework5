#include <iostream>
#include <cmath>
using namespace std;

int sort(int arr[],int n) {
    int profit=INT_MAX;
    int sellDay=0;
    int buyDay=0;
    int max=0;
    for(int i=0;i<n;i++) {
        if(arr[i]<profit) {
            profit=arr[i];
            buyDay=i;
        }
        int profit_now=arr[i]-profit;
        if(profit_now>max) {
            max=profit_now;
            sellDay=i;
        }
    }
    if (max>0) {
        return sellDay+1;
    }else{return 0;}
}

int main() {
    int n;
    cin>>n;
    int prices[n];
    for(int i=0;i<n;i++) {
        cin>>prices[i];
    }
    cout<<sort(prices,n);
}