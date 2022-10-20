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
    int n , h;
    cin>>n>>h;
    int arr[n];
    int count = 0;
    for(int i = 0 ; i < n ; i++) {
        cin>>arr[i];
        if(arr[i] > h) count+=2;
        else count++;
    }
    cout<<count<<endl;

    return 0;
}
