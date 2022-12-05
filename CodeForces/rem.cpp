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
    string str = "";
    for(int i = 0 ; i < s.length() ; ++i){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i += 2;
            continue;
        }
        str.push_back(s[i]);
        if(s[i+1] == 'W' && s[i+2] == 'U' && s[i+3] == 'B'){
            str.push_back(' ');
        }
    }
    str.pop_back();
    cout<<str<<endl;
    
    return 0;
}

