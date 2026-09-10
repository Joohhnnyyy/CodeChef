#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // your code goes here
        sort(a , a + n);
        double sum = 0;
        for(int i = k ; i < n - k ; i++){
            sum += a[i];
        }
        cout << fixed << setprecision(<<sum / (n - 2 * k ) << endl;
    }

}

set snippet
set_difference snippet
set_intersection snippet
set_union snippet
mset snippet
uset snippet
umset snippet
size_t keyword
stable_partition snippet