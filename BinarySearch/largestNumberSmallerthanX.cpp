#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {1,4,4,4,4,9,9,10};
    int x = 10;
    int i = lower_bound(v.begin() , v.end() , x) - v.begin();
    if(i >= 0){
        cout<<v[i-1]<<endl;
    }else cout<<-1<<endl;

    return 0;
}