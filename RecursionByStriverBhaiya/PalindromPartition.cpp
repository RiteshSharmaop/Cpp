#include<bits/stdc++.h>
using namespace std;
bool isPali(string s , int start , int end){
    while(start <= end){
        if(s[start++] != s[end--]){
            return false;
        }
    }
    return true;
}
void solve(string s , vector<vector<string>>& ans , vector<string> &output , int ind){
    if(ind == s.size()){
        ans.push_back(output);
        return;
    }
    for(int i = ind ; i < s.length() ; i++){
        if(isPali(s , ind , i)){
            output.push_back(s.substr(ind, i - ind + 1));
            solve(s , ans , output , i+1);
            output.pop_back();
        }
    }
}
vector<vector<string>> partition(string s) {
    vector<vector<string>> ans;
    vector<string> output;
    solve(s, ans, output , 0);
    return ans;
}
int main() {
    string s = "aabb";
    vector<vector<string>> ans = partition(s);
    for(auto i : ans){
        cout<<"[ ";
        for(auto j : i){
            cout<<j<<" , ";
        }cout<<" ]"<<endl;
    }
    return 0;
}