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
        long long int a;
        cin>>a;
        if(a >= 1900 ) cout<<"Division 1"<<endl;
        else if(a >= 1600 && 1899 >= a) cout<<"Division 2"<<endl;
        else if(a >= 1400 && 1599 >= a) cout<<"Division 3"<<endl;
        else cout<<"Division 4"<<endl;
    }
    return 0;
}

