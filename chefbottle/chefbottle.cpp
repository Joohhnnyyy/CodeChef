#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int times;
    cin >> times;
    while(times--){
        int a , b , c;
        cin >> a >> b >> c;
        cout<< ( min( a , c / b)) << endl;
    }
}
