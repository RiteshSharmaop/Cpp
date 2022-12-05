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
        string s;
        cin>>s;
        int start = -1 ,end = -1;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '1' && start == -1){
                start = i;
            }
            if(s[i] == '1'){
                end = i;
            }
        }
        if(start == -1 && end == -1){
            cout<<0<<endl;
        }else{
            int zer = 0;
            for(int i = start ; i < end ; i++){
                if(s[i] == '0') zer++;
            }
            cout<<zer<<endl;
        }
    }
    return 0; 
}