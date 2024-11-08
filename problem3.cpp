#include <algorithm>
#include <iostream>
#include <bits/ranges_algo.h>
using namespace std;
int find(int a[],int n);
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<find(a,n);
}
int find(int a[],int n) {
    for(int i=0;i<n;++i) {
        bool unique=true;
        for(int j=0;j<n;++j) {
            if(a[i]==a[j]&&i!=j) {
                unique=false;
                break;
            }
        }
        if(unique) {
            return a[i];
        }
    }return -1;
}