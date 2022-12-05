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
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        maxi = max(maxi , arr[i]);
    }
    int tot = 0;
    for(int i = 0 ; i < n ; ++i){
        tot += (maxi - arr[i]);
    }
    cout<<tot<<endl;
    return 0;
}


