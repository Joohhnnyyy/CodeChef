#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int times;
    cin >> times;
    while(times--){
        int a , b ;
        cin >> a >> b;
        int total = a + b;
        total = 21 - total ;
        cout<<((total <= 10 && total >= 1) ? total : -1)<< endl;
    }
}
