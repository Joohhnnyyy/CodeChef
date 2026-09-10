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
        int sum = 0;
        for(int i = 1 ; i < a.size() - 2 ; i++){
            sum += a[i];
        }
        cout << sum / (arr.size() - 3) << endl;
    }

}

namespace local
new keyword
next_permutation snippet
noexcept keyword
none_of snippet
not keyword
not_eq keyword
ns snippet
nth_element snippet