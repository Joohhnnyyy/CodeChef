#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int times;
    cin >> times;
    while( times-- ){
        int n ;
        cin >> n;
        vector<int>arr(n);
        for(int j = 0 ; j < n ; j++)cin>> arr[j];
        int maximun = arr[0];
        for(int i = 0 ; i < arr.size() ; i++){
            if(maximum < arr[i])maximum = arr[i];
        }cout << maximum << endl;
    }
}

friend keyword
lower_bound snippet
upper_bound snippet