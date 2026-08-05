#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int times;
    cin >> times;
    while(times--){
        int a , b ;
        cin >> a >> b;
        int counter = 0;
        while( a < b){
            a += 8 ;
            counter++;
        }cout<< counter << endl;
    }
}
