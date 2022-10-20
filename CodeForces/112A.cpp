

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
    string f,s;
    cin>>f>>s;
     transform(f.begin(), f.end(), f.begin(), ::tolower);
     transform(s.begin(), s.end(), s.begin(), ::tolower);
    if(f==s) cout<<0<<endl;


    if(f>s) cout<<1<<endl;
    if(f<s) cout<<-1<<endl;
    return 0;
}