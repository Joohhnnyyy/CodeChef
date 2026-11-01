#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int larg = INT_MIN;
        int secLarg = INT_MIN;
        for ( int  num : a){
            if(num > larg){
                secLarg = larg;
                larg = num;
            }else if(num < larg && num > secLarg ){
                secLarg = num;
    
        }return larg + secLarg;
    }
}

secLarg local