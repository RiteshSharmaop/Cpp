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
    int n;
    cin>>n;
    int arr[n];
    int maxi = INT32_MIN;
    for(int i = 0 ; i < n ; ++i){
        cin>>arr[i];
        maxi = max(maxi , arr[i]);
    }
    if(n == 0) {
        cout<<0<<endl;
        return 0;
    }
    int sum = 0;
    
    for(int i = 0 ; i < n ; ++i){
        int total = maxi-arr[i];
        sum += total ;
    }
    cout<<sum<<endl;
    return 0;
}


