#include<bits/stdc++.h>
using namespace std;
bool ValidParanthesis(string s , stack<char> &st){
    if(s[0] == ')' || s[0] == ']' || s[0] == '}' ) return false;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == '{' || s[i] == '[' ||s[i] == '(' ){
            st.push(s[i]);
        }else{
            if(st.top() == )
        }
    }
}
int main() {
    string s = "{[()]}";
    stack<char> st;

    return 0;
}