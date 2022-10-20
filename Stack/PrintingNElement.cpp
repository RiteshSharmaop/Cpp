#include<bits/stdc++.h>
using namespace std;
int main() {
    int n ; 
    cin>>n;
    stack<int> st;
    while(n--){
        int a;
        cin>>a;
        st.push(a);
    }
    // while(st.size() != 0 ){  
    while(!st.empty()){
        cout<< st.top()<<" ";
        st.pop();
    }
    return 0;
}