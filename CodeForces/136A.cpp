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
    map<int , int> p;
    int  n;
    cin>>n;
    int arr[n+1];
    vector<int> v(n+1);
    for(int i = 1 ; i <= n ; i++){
        cin>>arr[i];
        v[arr[i]] = i;
    }
    for(int i = 1 ; i <= n ; ++i) cout<<v[i]<<" ";
    
    return 0;
}