#include<bits/stdc++.h>
using namespace std;
void solve(int i ,int sum ,int n,int arr[] , int k , vector<int> v){
    if(i>n){
        if(sum == k ){
            for(auto j : v) cout<< j <<" ";
            cout<<endl;
        }
        return;
    }
    if(sum == k ){
            for(auto j : v) cout<< j <<" ";
            cout<<endl;
            return ;
    }
    if(sum > k){
        return;
    }
    // include
    v.push_back(arr[i]);
    sum += arr[i];
    solve(i , sum , n , arr , k , v);
    v.pop_back();
    sum -= arr[i];
    // exclude
    solve(i+1 , sum , n , arr , k , v);

}
void CombinationSumStriver(int i , int n,int arr[] , int k , vector<int> &v){
    if(i > n){
        if(k==0){
            for(auto j : v) cout<< j << " ";
            cout<<endl;
        }
        return;
    }
    if( k < 0  ) return;
    if(k == 0 ) {
        for(auto j : v) cout<< j << " ";
            cout<<endl;
        return;

    }
    

    if(arr[i]  < k )
    v.push_back(arr[i]);
     CombinationSumStriver(i ,  n , arr , k - arr[i] , v);
    v.pop_back();
     CombinationSumStriver(i+1 , n , arr , k  , v);



}
int main(){
    int arr[] = {2,3,5};
    int k = 8;
    vector<int> v;
    // solve(0,0,3,arr,k,v);
         CombinationSumStriver(0 ,  3 , arr , k  , v);
    
    return 0;
}


// Leetcode 

// class Solution {
// public:
//     void solve(int i , int target ,vector<vector<int>> &output,vector<int> &candidates,vector<int> &v){
            
//     // Base Case
//     if( target == 0 ) {
//         output.push_back(v);
//         return;
//     }
//     if( target < 0 || i >= candidates.size() )  return;

//     // exclude
//     solve(i+1 , target , output , candidates , v );
    
//     // include
//     v.push_back(candidates[i]);
//     solve(i , target - candidates[i] , output , candidates , v );
//     v.pop_back();

        
//     }
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
//     vector<vector<int>> output;
//     vector<int> v;
//     solve(0,target ,output , candidates , v);
//     return output;
//     }
// };