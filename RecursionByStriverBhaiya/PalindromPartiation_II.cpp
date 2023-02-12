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
void solve(string s , vector<vector<string>>& ans , vector<string> &output , int ind , int &mini , int &totcut){
    if(ind == s.size()){
        ans.push_back(output);
        mini = min(mini , totcut);
        return;
    }
    for(int i = ind ; i < s.length() ; i++){
        if(isPali(s , ind , i)){
            totcut++;
            output.push_back(s.substr(ind, i - ind + 1));
            solve(s , ans , output , i+1, mini , totcut );
            totcut--;
            output.pop_back();
        }
    }
}
int partition(string s) {
    vector<vector<string>> ans;
    vector<string> output;
    int totcut = 0;
    int mini = INT_MAX;
    solve(s, ans, output , 0, mini , totcut );
    return mini-1;
}
int main() {
    string s = "aab";
    int ans  = partition(s);
    cout<<ans<<endl;
    return 0;
}