#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
long long get_hsh(string s){
    long long h = 0;
    for(auto i : s){
        h = (h*31 + (i-'a'+1)) % MOD;
    }
    return h;
}
int main() {
    cout << get_hsh("dbc");
    return 0;
}