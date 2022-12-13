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
int main() {
    init_code();
    int n ;
    cin>>n;
    for(int i = 0 ; i <= n ; i++){
        for(int j = n-1 ; j >= i ; j--){
            cout<<"  ";
        }
        for(int j = 0 ; j <= i ; j++){
            cout<<j<<" ";
        }
        for(int j = 1 ; j <= i ; j++){
            cout<<i - j <<" ";
        }cout<<endl;
    }
    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j < i ; j++ ){
            cout<<"  ";
        }
        for(int j = n ; j >= i ; j--){
            cout<<n-j<<" ";
        }
        for(int j = n-1 ; j >= i ; j--){
            cout<<j - i<<" ";
        }
        cout<<endl;
    }
    return 0; 
}
