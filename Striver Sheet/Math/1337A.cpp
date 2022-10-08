#include<bits/stdc++.h>
using namespace std;
vector<int> ans(int a,int b, int c , int d , vector<int> &v){
    for(int i = a ; i <= d ; i++){
            if(i>=a){
                v[0] = i;
            }
            if(i>=b){
                v[1] = i;
            }
            if(i>=c){
                v[1] = i;
            }
            if((0.5)* v[0] * v[1] != 0){
                return v;
            }
        }
}
int main() {
    int t;
    cin>>t;
    while(t--){;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        vector<int> v(3);
        
        vector<int> anss = ans(a,b,c,d,v);
        for(auto i: anss ){
            cout<<i<<" ";
        }
        
        
        
    }
    return 0;
}