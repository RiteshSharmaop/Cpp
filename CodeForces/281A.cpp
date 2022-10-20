

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
    string str = s;
    // transform(s.begin(), s.end(), s.begin(), ::toupper);
    str[0] = toupper(str[0]);
    str[0] = s[0];
    cout<< str<<endl;
    return 0;
}

