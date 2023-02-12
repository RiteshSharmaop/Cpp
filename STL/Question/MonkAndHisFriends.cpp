#include<bits/stdc++.h>
using namespace std;
void init_code() {
// fast_io;
#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE 
}

int main() {
    init_code();
    long long testCase;
    cin>>testCase;
    while(testCase--){
        long long int n,m;
        cin>>n>>m;
        set<long long int> s;
        while(n--){
            long long int a;
            cin>>a;
            s.insert(a);
        }
        while(m--){
            long long int aw;
            cin>>aw;
            auto it = s.find(aw);
            if(it != s.end()) cout<<"YES\n";
            else {
                cout<<"NO\n";
                s.insert(aw);
            }
        }
        
        
    }   
    return 0; 

}
