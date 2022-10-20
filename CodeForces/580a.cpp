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
    long long int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    if(n == 1 ){
        cout<<1<<endl;
        return 0;
    }
    int maxi = -1;
    int count = 1;
    for(int i = 0 ; i < n-1 ; i++){
        if(arr[i] <= arr[i+1] ) count++;
        else count = 1; 

        maxi = max(maxi , count);
    }
    cout<<maxi<<endl;
    return 0;
}
