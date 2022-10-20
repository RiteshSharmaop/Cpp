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
    int t;
    cin>>t;
    int count = 0;
    while(t--){
        int p,q;
        cin>>p>>q;
        if(q-p >= 2) count++;

    }
    cout<<count<<endl;
    return 0;
}
