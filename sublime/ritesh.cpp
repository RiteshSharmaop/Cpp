#include<bits/stdc++.h>
using namespace std;

void init_code() {
// fast_io;
#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);

#endif // ONLINE_JUDGE 
}
int main() {
    init_code();
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        map<char , int> aa ,bb;

        int maxi = 0;
        for(auto i : a){
            aa[i]++;
        }
        
        for(auto i : b){
            bb[i]++;
        
        }
        for(auto i = 'a' ; i<='z' ; ++i ){
            maxi = max(maxi , min(aa[i],bb[i]));
        }
        cout<<maxi <<endl;
    }
    return 0;
}

