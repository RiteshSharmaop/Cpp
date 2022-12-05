#include<bits/stdc++.h>
using namespace std;
bool checkRedundantBracket(string s , stack<char> st){
    for(int i = 0 ; i < s.length() ; ++i){
        if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] =='%' ){
            st.push(s[i]);
        }
        if(s[i] == ')'){
            bool opePresent = true;
            while(st.top() != '('){ 
                if(st.top() == '+' ||st.top() == '-' || st.top() =='/' ||st.top() == '*'){
                    opePresent = false;
                }
                st.pop();
            }
            if(opePresent == true){
                return true;
            }
            st.pop(); // pop openint Brackets
        }
    }
    return false;;
}
int main() {
    
    string s  = "(a+c*b)+(c)";
    // cin>>s;
    stack<char> st;
    if(checkRedundantBracket(s , st)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
// (a+b)
// (a+c*b)+(c)
// (a*b+(c/d))
// ((a/b))