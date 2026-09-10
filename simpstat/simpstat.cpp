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
        cout << fixed << set<<sum / (n - 2 * k ) << endl;
    }

}

set
 
snippet
set
_difference
 
snippet
set
_intersection
 
snippet
set
_union
 
snippet
m
set
 
snippet
u
set
 
snippet
um
set
 
snippet
s
iz
e
_
t
 
keyword
s
tabl
e
_par
t
ition
 
snippet