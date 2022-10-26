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
        int a,b;
        cin>>a>>b;
        int c = a % b;
        if(c == 0){
            cout<<c<<endl;
        }else 
            cout<<b - c<<endl;
    }
    return 0;
}

