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
    int n;
    cin>>n;
    string str;
    cin>>str;
    if(n < 26){
        cout<<"No"<<endl;
    }else {
        transform(str.begin(),  str.end(),str.begin(), :: tolower);
        sort(str.begin(),  str.end());
        set<char> s;
        for(int i = 0 ; i < n ; i++){
            s.insert(str[i]);
        }
        if(s.size() == 26 )cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
