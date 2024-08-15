#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int le=0;
    for(int i=0;i<n;i++){
        if(a[i]<=k)
        le++;
    }
    int maxe=INT_MIN;
    int cnt=0;
    for(int i=0;i<le;i++){
        if(a[i]<=k){
            cnt++;
        }
        maxe=max(maxe,cnt);
    }
    for(int i=le;i<n;i++){
        if(a[i]<=k){
            cnt++;
        }
        if(a[i-le]<=k){
            cnt--;
        }
        maxe=max(maxe,cnt);
    }
    cout << le-maxe;
    return 0;
} 
