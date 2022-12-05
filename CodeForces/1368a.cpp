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
    
    ll t;
    cin>>t;
    while(t--){
        int a,b,n,count = 0;
        cin>>a>>b>>n;
        while(b <= n && a <= n){
            if(a > b){
                b += a;
                count++;
            }else{
                a += b;
                count++;
            }
        }
        cout<<count<<endl;

    }
    
    return 0; 
}