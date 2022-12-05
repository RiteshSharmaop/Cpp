#include<bits/stdc++.h>
using namespace std;

void init_code() {
// fast_io;
#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE 
}
#define ll long long int

int main() {
    init_code();
    ll n;
    cin>>n;
    if((n&1) != 0 ){
        n += 1;  
        n = n/2;
        ll k = n*2;
        cout<<n - k<<endl;
    }else {
        n = n/2;
        cout<<n<<endl;
    }
    return 0;
}