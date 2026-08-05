#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int times;
    cin >> times;
    while(times--){
        int a ,b , c, d;
        cin >> a >> b >> c >> d;
        if( a == b)cout<< "YES"<<endl;
        if(a < b)cout<<((a+c >= b) ? "YES" : "NO") <<endl;
        else cout<<((a - d <= b)? "YES" : "NO" )<< endl;
    }
}

endl local
friend keyword
lower_bound snippet
upper_bound snippet