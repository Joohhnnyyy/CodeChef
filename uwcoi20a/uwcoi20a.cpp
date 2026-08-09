    int times ; 
    cin >> times;
    while(times--){
        int n;
        cin>> n;
        vector<int> arr(n);
        for(int i = 0 ; i < arr.size() ; i++ ){
            cin >> arr[i];
        }
        int left = 0 , right = arr.size() - 1;
        int peak = -1;
        while( left <= right ){
            int mid = left + ( right - left ) / 2;
            if( arr[mid] < arr[mid + 1])left = mid + 1;
            else {
                peak = mid;
                right = mid - 1;
            }
        }cout<< arr[peak] << endl;
    }
    
}

int local
if local
include local
if keyword
inline keyword
int keyword
int16_t keyword
int32_t keyword
int64_t keyword