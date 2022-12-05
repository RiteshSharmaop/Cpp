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
    bool flag = true;
    for(int i = 1 ; i < s.length() ; i++){
        if(s[i] >= 'a'){
            flag = false;
            break;
        }
    }
    if(flag){
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] >= 'a'){
                s[i] -= 32;
            }else {
                s[i] += 32;
            }
        }
        cout<<s<<endl;
    }else cout<<s<<endl;
    return 0; 
}
