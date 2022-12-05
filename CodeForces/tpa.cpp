#include<bits/stdc++.h>
using namespace std;

void init_code() {
// fast_io;
#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE 
}
#define ll long long int
void solve(vector<int>& nums) {
        vector<int> ev;
        vector<int> od;
        if(nums.size() == 1) return ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] % 2 == 0){
                ev.push_back(nums[i]);
            }else {
                od.push_back(nums[i]);
            }
        }
        vector<int> ans(nums.size());

        for(int i = 0 ; i < ev.size() ; i++){
            ans[i] = ev[i];
        }
         int j = 0;
        for(auto i = ev.size() ; i < nums.size() ; i++){
            ans[i] = od[j];
            j++;
        }
        for(auto i : ans ) cout<<i<<" ";
    }
int main() {
    init_code();
    
    vector<int>nums = {3,1,2,4};
    solve(nums);

    return 0;
}



// 




