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
    
    ll n , k , l , c , d , p , nl , np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    ll ml = (k*l)/nl;
    ll slice = c*d;
    ll toast = p / np;
    ll ans = (min(ml , min(slice , toast)) )/ n;
    cout<<ans<<endl;
    return 0; 
}