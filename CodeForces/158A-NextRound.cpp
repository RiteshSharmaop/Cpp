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
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] >= arr[k-1] && arr[i] > 0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}