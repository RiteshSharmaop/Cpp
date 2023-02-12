#include<bits/stdc++.h>
using namespace std;


bool Bhaiyaaappro(string s){
    
} 
    bool solu(stack<char> st , string s){
        if(s[0] == '}' || s[0] == ')' || s[0] == ']'){
                return false;
        }else {
            for(int i = 0 ; i < s.length() ; i++){
                // edge case
                 if(st.empty() && (s[i] == '}' ||  s[i] == ')' || s[i] == ']')) return false;
                
                // code
                if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                    st.push(s[i]);
                }else {
                    if(st.top() == '(' && s[i] == ')' || st.top() == '{' && s[i] == '}' || st.top() == '[' && s[i] == ']'){
                        st.pop();
                    }else return false;
                }
            }
            if(st.empty()) return true;
            else return false;
        }
    }
bool isValid(string s) {
        stack<char> st;
        return solu(st,s);
    }

int main() {
    string s = "((){}"; // (){}}{
    if(isValid(s))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}