#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int times;
    cin >> times;
    while(times--){
        int a , b;
        cin >>  a >> b ;
        if(!(a%(b * 2)))cout<<"YES\n";
        else cout<<"NO\n";
    }
}
