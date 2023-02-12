#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {3,10,4,2,1,2,6,1,7,2,9};
    stack<int> st;
    vector<int> ans(11);
    st.push(-1);
    for(int i = 11-1 ; i >= 0 ; i--){
        if(st.top() == -1 || st.top() > v[i]){
            ans[i] = st.top();
            st.push(v[i]);
        }else {
            while(st.top() <= v[i] && st.top() != -1){
                cout<<"POP"<<endl;
                st.pop();
            }cout<<endl;
            ans[i] = st.top();
            st.push(v[i]);
        }
    }
    for(auto i : ans) cout<<i<<" ";
    cout<<endl;
    return 0;
}