#include<bits/stdc++.h>
using namespace std;
// LeetCode  / Lovebabbar / Striver
void solve(int i , int k ,vector<vector<int>> &output,vector<int> &arr,vector<int> &v){
    // Base Case
    if( k == 0 ) {
        output.push_back(v);
        return;
    }
    if( k < 0 || i >= arr.size() )  return;

    // exclude
    solve(i+1 , k , output , arr , v );
    
    // include
    v.push_back(arr[i]);
    solve(i , k - arr[i] , output , arr , v );
    v.pop_back();
}
int main(){
    vector<vector<int>> output;
    vector<int> arr = {2,3,5};
    int k = 8;
    vector<int> v;
    solve(0 , k , output,arr,v);
    return 0;
}