#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {2,1,4,3};
    stack<int>st;
    st.push(-1);
    int n = sizeof(arr)/ sizeof(arr[0]);
    int ans[n];
    for(int i = n-1 ; i >= 0 ; i--){
        int item = arr[i];
        /*while(!st.empty()){
            if(st.top() < item){
                ans[i] = st.top();
                st.push(arr[i]);
                break;
            }else {
                st.pop();
            }
        }
        */
        while(st.top() >= item){
            st.pop();
        
        }
        ans[i] = st.top();
        st.push(arr[i]);
        
    }
    for(int  i = 0 ; i < n ; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

void init_code() {
// fast_io;
#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE 
}

ascii value
A=65,Z=90,a=97,z=122

 
// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph


#define ll long long
#define pb emplace_back
#define mp make_pair
#define nt _int128
#define ld long double
long double PI =3.14159265358979323846;
const int N = 1e5;
vector<int> ans(4);
void solve(){
    int arr[] = {2,1,4,3};
    stack<int> st;
    st.push(-1);
    for(int i = 3 ; i >= 0 ; i--){
        if(arr[i] >= st.top()){
            ans[i] = st.top();
            st.push(arr[i]);
        }else {
            while(st.top() > arr[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(arr[i]);
        }
    }
    for(auto i : ans) cout<<i<<" ";

}

int main() {
    init_code();
    // long long testCase;
    // cin>>testCase;
    // while(testCase--){
    //     solve();
    // }
    solve();
    return 0; 
}
*/