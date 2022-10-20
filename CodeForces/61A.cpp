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
    string a,b;
    cin>>a>>b;
    string ans = "";
    for(int i = 0 ; i < a.size() ; i++){
        if(a[i] == b[i]) ans.push_back('0');
        else ans.push_back('1');
    }
    cout<<ans<<endl;

    return 0;
}
