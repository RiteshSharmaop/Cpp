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
bool solve (ll n,ll m ,ll k ,ll x){
    int rem = x/k;
        ll rd = (k-1)*n;
        ll mob = rd + n + m;
        ll ans = 0;
        for(int i = k ; i < x ; i += k){
            ans += mob;
            cout<<i<<" " << ans<<endl;
            // if(i % k == 0){
            //     cout<<i<<endl;
            //     if(ans >= x ){
            //         return true;
            //     }
            // }
        }
        return false;
}
int main() {
    init_code();
    
    ll t;
    cin>>t;
    while(t--){
        ll sum = 0, n, m , k ,x;
        cin>>n>>m>>k>>x;
        if(solve( n, m , k ,x)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
        
    return 0; 
}