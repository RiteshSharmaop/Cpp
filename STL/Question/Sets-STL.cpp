#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    set<long long> s;
    cin>>t;
    while(t--){;
        long long a,b;
        cin>>a>>b;
        if(a == 1){
            s.insert(b);
        }
        if(a == 2){
            auto it = s.find(b);
            if(it != s.end()) s.erase(it);
        }
        if(a == 3){
            auto itt = s.find(b);
            if( itt != s.end())cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }

    }
    return 0;
}