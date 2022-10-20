#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &v , stack<int> &st){
    if(st.size() == 0){
        sort(v.begin() , v.end());
        for(auto i: v) st.push(i);
        return; 
    }
    v.push_back(st.top());
    st.pop();
    solve(v,st);
}

void SortedInsert(stack<int> &st , int topElement){
    if(st.empty()){
        st.push(topElement);
        return;
    }
    if(st.top()<=topElement){
        st.push(topElement);
        return;
    }
    int topi = st.top();
    st.pop();
    SortedInsert(st,topElement);
    st.push(topi);

}
void sortStack(stack<int> &st){
    // Base Case 
    if( st.empty() ){
        cout<<"Bc of BhaiyaApproach"<<endl;
        return;
    }
    // store top Element
    int topElement = st.top();
    // Pop top Element
    cout<<"top ele BhaiyaApproach" << topElement<<endl;
    st.pop();
    // Resursive Call
    sortStack(st);
    // After recursive call we insert element in sorted way
    // sortedInsert
    cout<<"another Function CAll"<<endl;
    SortedInsert(st, topElement);
}
int main() {
    stack<int> st;
    st.push(2);
    st.push(4);
    st.push(2);
    st.push(1);
    st.push(3);
    vector<int> v;
    // solve(v,st);
    sortStack(st);
    cout<<".........................."<<endl;
    cout<<"Reverse Stack :- "<<endl;
    while(!st.empty()) {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}