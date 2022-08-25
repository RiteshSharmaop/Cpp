#include<bits/stdc++.h>
using namespace std;
// Two Pointer
bool pali(int s,int n,string str){
    if(s>=n){
        return true;
    }
    // if(str[s] == str[n]){
    //     pali(s+1,n-1,str);
    // }else{
    //     return false;
    // }
    if(str[s] != str[n]){
        return false;
    }

    return pali(s+1,n-1,str);
}
// One Pointer
bool palii(int s,string &str){
    if(s>=str.size() / 2){
        cout<<"Here return True"<<endl;
        return true;
    }
    if(str[s] != str[str.size()-1-s]) return false;

    // return palii(s+1 , str);
    palii(s+1 , str);
    cout<<"return"<<endl;
}
int main(){
    string str;
    cin>>str;
    int n = str.size()-1;
    int s = 0;

    if(palii(s,str)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    // cout<<palii(s,str);
    return 0;
}

