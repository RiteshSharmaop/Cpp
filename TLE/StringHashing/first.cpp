#include<bits/stdc++.h>
using namespace std;
int MOD = 1e9 + 7;

int getHash(string s){
    int h = 0;
    for(auto i : s){
        h = ((i-'a'+1)+31*h) % MOD;
    }
    return h;
}
int main() {
    cout << getHash("aaaa");
    return 0;
}