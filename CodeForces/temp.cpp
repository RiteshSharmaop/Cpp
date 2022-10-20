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
    int t;
    cin>>t;
    string str = "";
    while(t--){
        string s;
        cin>>s;
        str += s;
    }
    int maxi = -1;
    int count = 1;
    for(int i = 0 ; i < str.length(); i += 2){
        if(str[i] == str[i+2]) count++;
        else count = 1;
        maxi = max(maxi , count);
    }
    cout<<maxi<<endl;
    return 0;
}

