#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {4,10,5,8,20,15,3,12};
    stack<int>st;
    st.push(-1);
    int n = sizeof(arr)/ sizeof(arr[0]);
    int ans[n];
    for(int i = n-1 ; i >= 0 ; i--){
        int item = arr[i];
        while(!st.empty()){
            if(st.top() < item){
                ans[i] = st.top();
                st.push(arr[i]);
                break;
            }else {
                st.pop();
            }
        }
    }
    for(int  i = 0 ; i < n ; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}