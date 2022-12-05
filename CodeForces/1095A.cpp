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
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans = "";
    int  j = 0;
    for(int i = 0 ; i  < n ;i+=j ){
        ans.push_back(s[i]);
        j++;
    }
    cout<<ans<<endl;
    return 0; 
}