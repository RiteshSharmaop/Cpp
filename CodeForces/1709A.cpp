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
    while(t--){
        int x;
        cin>>x;
        int a,b,c;
        cin>>a>>b>>c;
        if(x == 1){
            if(a == 3 && c == 2 || a == 2 && b==3) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }else if(x == 2){
            if(b == 3 && c ==1 || a ==3 && b == 1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }else if(x == 3){
            if(b == 1 && c == 2 || a == 2 && c == 1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }else cout<<"No"<<endl;
    }
    return 0;
}
