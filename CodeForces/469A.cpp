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
    int a;
    cin>>a;
    set<int> s;
    while(a--){
        int k;
        cin>>k;
        s.insert(k);
    }
    int b;
    cin>>b;
    while(b--){
        int k;
        cin>>k;
        s.insert(k);   
    }
    if(s.size() == t) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
