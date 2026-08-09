#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int times;
    cin >> times;
    while(times--){
        int a , b , c, d;
        cin >> a >> b >> c >> d;
        if( a == b || a == c || a == d)cout<<"YES"<<endl;
        else if(b+c == a)cout<<"YES"<<endl;
        else if(c+d == a)cout<<"YES"<<endl;
        else if(d+b == a)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

endl local
friend keyword
lower_bound snippet
upper_bound snippet