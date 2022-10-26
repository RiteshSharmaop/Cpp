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
    while(t--){
        int n;
        cin>>n;
        if(n % 2 == 0){
            int ans = n/2;
            cout<<ans-1<<endl;
        }else {
            int ans = n/2;
            cout<<ans<<endl;
        }
    }
    return 0;
}


