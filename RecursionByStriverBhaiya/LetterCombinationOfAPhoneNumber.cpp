#include<bits/stdc++.h>
using namespace std;

void solve(int index , string &v , string digits ,vector<string> &ans,string mapp[] ){
        if(index >= digits.size()){
            ans.push_back(v);
            return;
        }   
        int target = digits[index] - '0';
        string value = mapp[target];
        for(int i = 0 ; i < value.size() ;i++){
            v.push_back(value[i]);
            solve(index+1 , v,digits , ans , mapp);
            v.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        string v;
        vector<string> ans;
        if(digits.size() == 0) return ans;
        string mapp[10] = {"","","abc","def","ghi" ,"jkl","mno","pqrs" , "tuv" , "wxyz"};
        solve(0,v,digits,ans, mapp);
        cout<<"Size : "<<ans.size()<<endl;
        return ans;
    }
int main() {

    string s;
    cin>>s;
    vector<string> ans = letterCombinations(s);
    for(auto i : ans) cout<<i<<" ";
    cout<<endl;
    return 0;
}