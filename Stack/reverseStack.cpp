#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &st  , int topi){
    if(st.empty()){
        st.push(topi);
        return;
    }

    // step 1
    int topElem = st.top();
    st.pop();

    // Step 2 : Recursive Call
    insertAtBottom(st , topi);
    // Step 3
    st.push(topElem);
}

void reverse(stack<int> &st ){
    if(st.empty()){
        cout<<"SuccessyFully Executed"<<endl;
        return;
    }
    int topi = st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st , topi);
    


}
int main() {
   
    stack<int> st;
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1); 
    
    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    
    return 0;
}