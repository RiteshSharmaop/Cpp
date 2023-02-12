#include<bits/stdc++.h>
using namespace std;
int main() {
    map<int , set<string>> m;
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++ ){
        string s;
        int a;
        cin>>s>>a;
        m[a].insert(s);
    }
    cout<<endl;
    for(auto it = m.rbegin() ; it != m.rend() ; it++){
        auto & value = (*it).first;
        auto & sett = (*it).second;
        for(auto i : sett){
            cout<<i <<" "<<value<<endl;
        }
    }
    return 0;
}