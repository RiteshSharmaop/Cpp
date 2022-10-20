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
    int arr[4];
    for(int i = 0 ; i < 4 ; i++){
        cin>>arr[i];
    }
    sort(arr,arr+4);
    int count = 0;
    for(int i = 0 ; i < 3 ; i++){
        if(arr[i]==arr[i+1]) count++;
    }
    cout<<count<<endl;
    return 0;
}
