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
bool solve(ll t,ll n, ll arr[]){
    ll i = 0;
    while(i < t-1){
        i += arr[i];
    }
    if(i == t-1) return true;
    else return false;
}
int main() {
    init_code();
    ll n,t;
    cin>>n>>t;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    if(solve(t,n,arr)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0; 
}
