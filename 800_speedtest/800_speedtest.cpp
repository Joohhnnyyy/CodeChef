#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int times;
    cin>> times;
    while(times--){
        int a , b , c , d;
        cin >> a >> b >> c >> d;
        if(a/b == c/d)cout << "Equal" << endl;
        else cout<<((a/b > c/d) ? "Alice" : "Bob") << endl;
    }
}
