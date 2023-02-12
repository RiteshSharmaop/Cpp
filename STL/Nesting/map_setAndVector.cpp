#include<bits/stdc++.h>
using namespace std;
int main() {
    map<pair<string , string > , vector<int>> m;
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; ++i){
        string firstName , LastName;
        int N;
        cin >> firstName >> LastName >> N;
        for(int i = 0 ; i < N ; ++i){
            int a;
            cin >> a;
            m[{firstName , LastName}].push_back(a);
        }
    }
    cout<<endl;
    for(auto &element : m ){
        auto &fullName = element.first;
        cout<<element.first.first <<" "<<element.first.second<<endl;
        auto &List = element.second;
        cout<<element.second.size() <<" " <<List.size()<<endl;
        for(auto & val : element.second){
            cout<<val<<" ";
        }cout<<endl;
    }cout<<endl;
    return 0;
}