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
            int a = 0;

    while(t--){
        string x;
        cin>>x;
        if(x[0] == '+' || x[2] == '+'){
            a++;
        }else {
            a--;
        }
    }
    cout<<a<<endl;
        return 0;
}