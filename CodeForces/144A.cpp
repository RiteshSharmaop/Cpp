#include<bits/stdc++.h>
using namespace std;

void init_code() {
// fast_io;
#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);

#endif // ONLINE_JUDGE 
}

int main() {
    init_code();
    int n, ans;
    cin>>n;
    int arr[n];
    int maxi = INT32_MIN;
    int mini = INT32_MAX;
    int mi = -1 , mii = -1;
    for(int i = 0 ; i < n ; ++i){
        cin>>arr[i];
        if(arr[i] > maxi){
            maxi = max(maxi , arr[i]);
            mi = i;
        }
        if(arr[i] <= mini){
            mii = i;
            mini = min(mini , arr[i]);
        }
    }
    cout<<mi + (n - 1 - mii) - (mii < mi ? 1 : 0) << endl;
    return 0;
}


