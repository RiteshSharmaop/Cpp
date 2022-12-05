#include<bits/stdc++.h>
using namespace std;

void init_code() {
// fast_io;
#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE 
}
#define ll long long int
int main() {
    init_code();
    
   string s;
   cin>>s;
   for(int i= 0 ; i < 5 ; i++){
        string temp;
        cin>>temp;
        if(temp[0] == s[0] || temp[1] == s[1] ){
            cout<<"YES"<<endl;
            return 0;
        }
   }
   cout<<"NO"<<endl;
    return 0; 
}