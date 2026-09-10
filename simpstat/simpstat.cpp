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
        cout << fixed << setprecision(6)<<sum / (n - 2 * k ) << endl;
    }

}

int64_t keyword
int16_t keyword
uint64_t keyword
char16_t keyword
uint16_t keyword