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
    string s;
    cin>>s;
    int n = s.length();
    cout<<((n+1)*25) + 1<<endl;
    return 0;
}