#include<bits/stdc++.h>
using namespace std;
// LeetCode  / Lovebabbar / Striver
void solve(int sum , int i , int k ,vector<int> &arr,vector<int> &v){
    // Base Case
    if ( i > arr.size()) {
        if(sum == k){
            for(auto j : v) cout<< j << " ";
            cout<<endl;
        }
        return;
    }
    if(sum == k){
        for(auto j : v) cout<< j << " ";
        cout<<endl;
        return;
    }
    if(sum > k) return;

    
    sum += arr[i];
    v.push_back(arr[i]);
    solve(sum,i+1,k , arr,v);
    sum -= arr[i];
    v.pop_back();
    solve(sum,i+1,k , arr,v);
    

}

int main(){
    vector<int> arr = {1,2,2,2,5};
    vector<int> v;
    int k = 5;
    solve(0,0 , k,arr,v);
    return 0;

}