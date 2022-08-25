#include<bits/stdc++.h>

using namespace std;
int main(){
    vector <int> v ;
    // v.push_back(7);
    for(int i = 0 ; i<5;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    
    for(int i = 0 ; i<5;i++){
        cout<<v[i]<<" ";
    }
    cout<<v.size();
    return 0;
}
