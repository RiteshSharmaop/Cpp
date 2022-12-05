#include<bits/stdc++.h>
using namespace std;
bool solve(string s , stack<char> st , map<char , int> m){
    for(int i = 0 ; i < s.length() ; ++i){
        if(s[i] == '('){
            m[0] += 1;
        }
        if(s[i] == ')'){
            m[1]++;
        }
    }
    if(m[0] != m[1] ) return true;
    for(int i = 0 ; i < s.length() ; ++i){
        if(s[i] == '('&& s[i+1] == '(' ){
            st.push(s[i]);
        }

        if(!st.empty() && s[i] == ')' && s[i+1] == ')'){
            return true;
        }
    }
    return false;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        string s ;
        cin>>s;
        stack<char> st;
        map<char , int> m;
        m.insert(pair<char, int>('(', 0));
        m.insert(pair<char, int>(')', 0));
        
        
        if(solve(s,st , m)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
// (a+b)
// (a+c*b)+(c)
// (a*b+(c/d))
// ((a/b))