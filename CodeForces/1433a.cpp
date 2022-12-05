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
        int a,n,count = 0;
        cin>>a;
        while(a!=0){
            n = a%10;
            a /= 10;
            count++;
        }
        int b = n - 1;
        b *= 10;
        int c = count;
        int pref[] = {1 , 3 , 6 , 10};
        int d = pref[c-1];
        cout<<b + d<<endl;
    }
    return 0; 
}