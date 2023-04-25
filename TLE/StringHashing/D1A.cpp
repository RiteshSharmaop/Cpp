class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<int>> mp;
        for(int i = 0 ; i < strs.size() ; i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto i : mp){
            vector<string> a;
            for(auto j : i.second){
                a.push_back(strs[j]);
            }
            ans.push_back(a);
        }
        return ans;
    }
};