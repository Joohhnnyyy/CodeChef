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
        for(int i = 1 ; i < n - k ; i++){
            sum += a[i];
        }
        cout << sum / (arr.size() - 3) << endl;
    }

}

long keyword
lower_bound snippet
make_heap snippet
map snippet
max snippet
max_element snippet
merge snippet
mfun snippet
min snippet