#include<bits/stdc++.h>
using namespace std;

void init_code() {
#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);

#endif 
}

int main() {
    init_code();
    int r,b;
    cin>>r>>b;
    int diff = max(r,b) - min(r,b);
    cout<<min(r,b)<<" " << diff/2<<endl;
    return 0;
}


