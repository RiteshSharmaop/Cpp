#include<bits/stdc++.h>
using namespace std;
void buildArray(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++){
            ans[i] = nums[nums[i]];
        }
        for(auto i:ans) cout<<i<<" ";
    }
int main() {
    int n;
    cin>>n;
    vector<int> nums;
    for(int i = 0 ; i < n ; i++){
        cin>>nums[i];
    }
    buildArray(nums);
    return 0;
}
