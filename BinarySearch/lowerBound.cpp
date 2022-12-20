#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {1,4,4,4,4,5,6,8};
    int x = 4;
    int i = lower_bound(v.begin(),v.end() , x) - v.begin();
    if(i < v.size() && v[i] == x ){
        cout<<i<<endl;
    }else cout<<-1<<endl;

    i = upper_bound(v.begin(),v.end() , x) - v.begin();
    if(i >= 0 && v[i-1] == x ){
        cout<<i-1<<endl;
    }else cout<<-1<<endl;
    // cout<<i<<endl;
    return 0;
}