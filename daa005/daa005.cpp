#include <bits/stdc++.h> 
using namespace std;

// Replace '_' to solve the problem

void sort(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        int min_val = arr[i];
        int min_idx = i;
        for(int j = i + 1; j < n; j++) {
            if( arr[min_idx]> arr[j]) {
                min_val = arr[j];
                min_idx  = j;
            }
        }
        swap(arr[i], arr[min_idx]);
        
    }
}

int main() {
    int n; 
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, n);

min_idx local