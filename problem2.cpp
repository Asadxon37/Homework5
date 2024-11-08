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

    sort(arr,arr+n);
    cout<<division(arr,n);
}
int division(int arr[], int n) {
    int k=arr[0];
    int i=0;
   while(i<n){
       i++;
        if(arr[i]%k==0) {
            return k;
        } {return -1;}
    }
}