#include <algorithm>
#include <iostream>
using namespace std;
int division(int arr[], int n);
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    sort(arr,arr+n,greater<int>());
    cout<<division(arr,n);
}
int division(int arr[], int n) {
    int k=arr[n-1];
    for(int i=0;i<n;i++) {
        if(arr[i]%k==0) {
            return k;
        } {return -1;}
    }
}