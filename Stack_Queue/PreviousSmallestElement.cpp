#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {4,10,5,8,20,15,3,12};
    stack<int> st;
    st.push(-1);
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    for(int i = 0 ; i < n ; i++ ){
        int item = arr[i];
        while(st.top() > arr[i]){
                st.pop();
            }
        ans[i] = st.top();
        st.push(arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}