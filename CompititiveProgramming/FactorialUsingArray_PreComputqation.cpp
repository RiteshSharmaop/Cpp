#include<bits/stdc++.h>
using namespace std;
// Modulo Arith
const int m = 1e7;
const int n = 1e5;
long long int fact[n];
int main() {
    fact[0] = fact [1] = 1;
    for(int i = 2 ; i< n ; i++){
        fact[i] = fact[i-1] * i;
    }
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fact[n]<<endl;  

        // T.C --> O(n) + O(t)
    }
    return 0;
}