#include<bits/stdc++.h>
using namespace std;

    void solve(string s , int size){
        int st = 0;
        int e = size-1; 
        while(st<e){
            swap(s[st],s[e]);
            st++;
            e--;
        }
        int ans = (int)s;
        
    }
    int  isPalindrome(int x) {
        if(x < 0 )  return false;
        stringstream ss;  
        ss<<x;  
        string s;  
        ss>>s;  
        int size = s.size();
        solve(s,size);
        int ans = (int) s;
    }
    int main(){
        int x ;
        cin>>x;
        

    return 0;
}