#include<bits/stdc++.h>
using namespace std;
void AllPermutation(int arr[] , int n , vector<int>& ans , int freq[]){
    if(ans.size() == n){
        for(auto &i : ans){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i = 0 ; i < n ; i++){
        if(!freq[i]){
            ans.push_back(arr[i]);
            freq[i] = 1;
            AllPermutation(arr,n,ans,freq);
            freq[i] = 0;
            ans.pop_back();
        }
    }
}

/*
                LeetCode


void AllPermutation(vector<int>& nums , int n , vector<int>& ans , int freq[],vector<vector<int>> &anss){
    if(ans.size() == n){
        anss.push_back(ans);
        return;
    }
    for(int i = 0 ; i < n ; i++){
        if(!freq[i]){
            ans.push_back(nums[i]);
            freq[i] = 1;
            AllPermutation(nums,n,ans,freq,anss);
            freq[i] = 0;
            ans.pop_back();
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>> anss;
        int n = nums.size();
        int freq[n];
        for(int i = 0 ; i < n ; i++){
            freq[i] = 0;
        }
        AllPermutation(nums ,n ,ans ,freq,anss);
        return anss;
    }

    */
int main() {
    int arr[] = {1,2,3};
    int freq[3] = {0};
    vector<int> ans;
    AllPermutation(arr,3,ans,freq);
    return 0;
}