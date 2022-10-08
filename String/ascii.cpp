#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s){
    int st= 0;
    int e = s.length()-1;
    for(int i = 0; i <s.length()  ; i++){
        putchar(toupper(s[i]));
    }
    while(st<=e){
        if((int)s[st]!= (int)s[e]){
            return false;
        }
        st++;
        e--;
    }
    return true;
}

int main(){
   string s;
    cin>>s;
    if(checkPalindrome(s)) cout<<"True"<<endl;
    else cout<<"FAlse"<<endl;
    return 0;
}