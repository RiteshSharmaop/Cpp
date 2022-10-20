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
    int a ,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int one = 0 , two = 0 , three = 0 , four = 0;
    for(int i = 0 ; i < s.length() ; ++i){
        if(s[i] == '1') one++;
        if(s[i] == '2') two++;
        if(s[i] == '3') three++;
        if(s[i] == '4') four++;
    }
    int ans = one * a + two * b + three * c + four *d;
    cout<<ans<<endl;

    return 0;
}
