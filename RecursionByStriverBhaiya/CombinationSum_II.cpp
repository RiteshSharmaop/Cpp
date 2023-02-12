#include<bits/stdc++.h>
using namespace std;

/*
void AllSequences(int i,int arr[],int n, vector<int>& v,int target,set<vector<int>> &ans){
    
    // O(2^n * k)
    if(i == n){
        if(target == 0){
            ans.insert(v);
        }
        return;
    }
    
    // Sequences
    if(arr[i] <= target){
        v.push_back(arr[i]);
        // target = ;
        AllSequences(i+1,arr,n,v,target - arr[i] , ans);
        v.pop_back();
    }
    AllSequences(i+1,arr,n,v,target , ans);
}

void printVec(vector<vector<int>>& anss ,vector<int> &v){
    // O(logN) --> depends on Set Size
    anss.push_back(v);
    
}

int main(){
    int arr[] = {10,1,2,7,6,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int> v;
    set<vector<int>> ans;
    sort(arr , arr+n);
    AllSequences(0,arr,n,v,8,ans);
    vector<vector<int>> anss;
    for(auto i : ans){
        printVec(anss,i);
    }
    
    return  0;
}

*/
void optimisedApproach(int ind,int arr[],int n, vector<int>& v,int target,vector<vector<int>> &ans){
    if(target == 0){
        ans.push_back(v);
        return;
    }

    for(int i = ind ; i < n ; i++){
        if(i > ind && arr[i-1] == arr[i]) continue;
        if(arr[i] > target) break;

        v.push_back(arr[i]);
        optimisedApproach(i+1 , arr,n,v,target-arr[i], ans);
        v.pop_back();
    }
}
int main(){
    int arr[] = {10,1,2,7,6,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int> v;
    vector<vector<int>> ans;
    sort(arr , arr+n);
    optimisedApproach(0,arr,n,v,8,ans);
    for(auto i : ans){
        for(auto j : i){
            cout<<j<<" ";
        }cout<<endl;
    }
    
    return  0;
}