#include<bits/stdc++.h>
using namespace std;

void init_code() {
// fast_io;
#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);

#endif // ONLINE_JUDGE 
}

bool solve(string s , int count){
     for(int i = 0 ; i< s.length() ; i++){
        for(int j = i ; j < i+7 ; j++){ 
            if(s[i] == s[j]) {
                count++;
            }
            else{
                count = 0;
            }
        }
        if(count == 7) return true;
    }
    return false;

}
int main() {
    init_code();
    string s;
    cin>>s;
    int count = 0;
    
    if(solve(s,count)){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
    
    return 0;
}
