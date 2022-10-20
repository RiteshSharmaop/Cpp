

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
    int one = 0 , two = 0 , three = 0;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == '1') one++;
        if(s[i] == '2' ) two++;
        if(s[i] == '3') three++;
    }
    string ans ="";
    while(one--){
        // cout<<1<<'+';
        ans.push_back('1');
        ans.push_back('+');
    }

    while(two--){
        // cout<<3<<'+';
        ans.push_back('2');
        ans.push_back('+');
    }
    while(three--){
        // cout<<3<<'+';
        ans.push_back('3');
        ans.push_back('+');
    }
    ans.pop_back();
    cout<<ans<<endl;

    return 0;
}