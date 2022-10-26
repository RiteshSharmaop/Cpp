#include<bits/stdc++.h>
using namespace std;

void init_code() {
// fast_io;
#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);

#endif // ONLINE_JUDGE 
}

int main() {
    init_code();
    string s;
    cin>>s;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9' || s[i] == '+' ){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}


