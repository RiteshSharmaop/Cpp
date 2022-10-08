#include<bits/stdc++.h>
using namespace std ;
bool solve(string s , int size){
    int st = 0;
    int e = size-1; 
    while(st<e){
        if(s[st] != s[e]) return false;
        st++;
        e--;
    }
    return true;
}
bool isPalindrome(int x) {
        if(x < 0 )  return false;
        
        stringstream ss;  
        ss<<x;  
        string s;  
        ss>>s;  
        int size = s.size();

        return solve(s,size);
}
int main(){
    int x;
    cin>>x;
    cout<<isPalindrome(x);

    return 0;
}