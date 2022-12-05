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
    char dir;
    cin>>dir;
    string str;
    cin>>str;
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    if(dir == 'R'){
        for(int  i = 0 ; i < str.length() ; i++){
            for(int j = 0 ; j < s.length() ; j++){
                if(str[i] == s[j]){
                    cout<<s[j-1];
                }
            }
        }
    }else {
        for(int  i = 0 ; i < str.length() ; i++){
            for(int j = 0 ; j < s.length() ; j++){
                if(str[i] == s[j]){
                    cout<<s[j+1];
                }
            }
        }
    }

    return 0; 
}