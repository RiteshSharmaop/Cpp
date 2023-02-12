// Minimum number of bracket reversals needed to make an expression balanced
#include<bits/stdc++.h>
using namespace std;
int solve(string &s , stack<char> &st){
    int count = 0;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == '{'){
            st.push('{');
        }
        if(s[i] == '}'){
            if(!st.empty() && st.top() == '{'){
                st.pop();
            }else {
                count++;
            }
        }
    }
    if(count == s.length()) {
        cout<<"Yo"<<endl;
        return count/2;
        }
    if(st.empty()){
        cout<<"Yo1"<<endl;
        return 0;
    }
    
    if(st.size() == s.length()){
        cout<<"Yo2"<<endl;
        return (st.size()/2);
    }
    return st.size()/2 + count/2;
}
int main() {
    string s;
    cin>>s;
    stack<char>st;
    if((s.length() & 1) == 0 ) cout<<solve(s,st);
    else cout<<-1<<endl;
    return 0;
}