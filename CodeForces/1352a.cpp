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
const int N = 1e5+10;
int pref[N];
int main() {
    init_code();
    
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        vector<string> vec;
        for(int i = 0 ; i < n ; i++){
            if(s[i] != '0'){
                string ans = "";
                ans.push_back(s[i]);
                int k = (n-i-1);
                while(k--){
                    ans.push_back('0');
                }
                vec.push_back(ans);
            }
        }
        cout<<vec.size()<<endl;
        for(auto i: vec)cout<<i<<" ";
        cout<<endl;
    }
    
    return 0; 
}