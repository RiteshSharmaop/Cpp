
// Both are KMP
// KMP
vector<int> KMP(string s , int n){
    // O(n)
    int i = 1 , len = 0 ;
    vector<int> pi(n);
    pi[0] = 0;
    while(i < n){
        if(s[i] == s[len]){
            len++;
            pi[i] = len;
            i++;
        }else {
            if(len != 0) len = pi[len-1];
            else {
                pi[i] = (0);
                i++;
            }
        }
    }
    return pi;
}
vector<int> kmp(string s, int n){
    vector<int> pi(n , 0);
    for(int i = 1 ; i < n ; i++){
        int j = pi[i-1];
        while(j > 0 && s[i] != s[j]) j = pi[j-1];
        if(s[i] == s[j]){
            j++;
        }
        pi[i] = j; 
    }
    return pi;
}
void solve(){
    string s;
    cin >> s;
    int n = sz(s);
    vector<int> pi = piTable(s,n);

    vector<int> ans;
   
    int i = pi[sz(pi)-1];
    while(i > 0){
        ans.emplace_back(i);
        i = pi[i-1];
    }
    sortarr(ans);
    for(auto &i : ans) cout << i << " ";
}
