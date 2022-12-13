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
#define pb push_back
bool solve(){
    
}
int main() {
    init_code();
    ll n;
    cin>>n;
    ll count = 1;
    ll ans = 0;
    while(n > 1){
        ans +=  ((n-1) * count);
        ans += 1;
        count++;
        n--;  
    }
    ans += 1;
    cout<<ans<<endl;
    return 0; 
}
