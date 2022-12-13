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
#define ull unsign long long int
#define pb push_back
bool solve(){
    
}
int main() {
    init_code();
    int count = 0;
    int n,m;
    cin>>n>>m;
    if(n == m) cout<<0<<endl;
    else if(m%n != 0) cout<<-1<<endl;
    else {
        ll ans = m/n;
        while(ans % 2 == 0){
            ans /= 2;
            count++;
        }
        while(ans % 3 == 0){
            ans /= 3;
            count++;
        }
        if(ans != 1)count = -1;
        cout<<count<<endl;
    }
    return 0; 
}