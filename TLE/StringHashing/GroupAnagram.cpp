#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    /*
    This will work Properly
    */
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
void solvee(){
    // this will also work
    ll n,k;
    cin >> n;
    vector<string> arr(n);
    for(auto &i : arr ) {
        cin >> i;
    }
    map<string , vector<string>> mp;
    for(int i = 0 ; i < n ; i++){
        string str = arr[i];
        sort(str.begin(),str.end());
        mp[str].emplace_back(arr[i]);
    }
    for(auto &i : mp){
        cout << i.first << " -> " ;
        vector<string> a = i.second;
        for(auto j : a) cout << j << " ";
        cout<<endl;
    }
}
void solve(){
    /* String Hashing Not Work Properly
    this will  not work for all the  test case 
    [aa ,b || bb ,c ] -> 1+1 , 2
    here 1+1 == 2 but aa != b
    */
    long long int n,k;
    cin >> n;
    vector<string> arr(n);
    for(auto &i : arr ) {
        cin >> i;
    }
    map<int , vector<string>> mp;
    for(int i = 0 ; i < n ; i++){
        string str = arr[i];
        long long int cnt = 0;
        for(auto &i : str){
            cnt += i-'a';
        }
        mp[cnt].emplace_back(str);
    }
    for(auto &i : mp){
        cout << i.first << " -> " ;
        vector<string> a = i.second;
        for(auto j : a) cout << j << " ";
        cout<<endl;
    }
}
int main() {
     solve();
     solvee();
    return 0;
}
