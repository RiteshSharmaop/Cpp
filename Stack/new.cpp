#include<bits/stdc++.h>
using namespace std;
int usingIteration(stack<int> &st , int n){
    if(n & 1 != 0){
        n /= 2;
        while(n--){
            st.pop();
        }
        return st.top();
    }else {
        n /= 2;
        n -= 1;
        while(n--){
            st.pop();
        }
        return st.top();
    }    
}
void usingRecursion(stack<int> &st ,int element ,int nn ,int n){
    if(nn == n){
        cout<< "Answer is : " <<element<<endl;
        return;
    }
    element = st.top();
    st.pop();
    usingRecursion(st,element,nn,n-1);
    st.push(element);
}
void solve(stack<int> &st , int totalSize){
    
    if((totalSize / 2) + 1 == st.size()){
        cout<< st.top() <<endl;
        return ;
    }
    // store stack top in variable fot further use in Backtrack
    int element = st.top();
    // remove last element 
    st.pop();
    solve(st , totalSize);
    // backtrack 
    // puh  element stack 
    st.push(element);
}
int main() {
    cout<<"Enter N : "<<endl;
    int n ; 
    cin>>n;
    int t = n;
    cout<<"Enter array"<<endl;
    stack<int> st;
    while(t--){
        cout<<"Enter a"<<endl;      
        int a; 
        cin>>a;
        st.push(a);
    } 
    int nn = n/2;
    int element = -1;
    // cout<<usingIteration(st,n)<<endl;
    int ans;

    // usingRecursion(st , element , nn , n);

    // Love B Appraoach
    solve(st , st.size());
    cout<<"Stack : "<<endl;
    while(!st.empty()){
        cout<< st.top()<<" ";
        st.pop();
    }
    return 0;
}