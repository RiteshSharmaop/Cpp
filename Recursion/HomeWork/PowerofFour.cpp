#include<bits/stdc++.h>
using namespace std;
bool Power(int n,int ans){
    for(int i = 1 ; i < n ; i++){
        ans = pow(4,i);
        if(ans == n){
            cout<<i<<" ";
            return true;
        }
        if(ans>n) return false;
    }
    return false;
}
bool power(int n , int ans ,int i){
    if(n == ans) {
        return true;
    }
    if(ans>n) return false;
    ans = pow(4,i);
    return power(n , ans ,i+1);


}
bool Poww(int n){
    if(n<=0) return false;
    if(n == 1 ) return true;
    
}
int main(){
    int n = 64;
    int ans = 0;
    cout<<power(n,ans,0);
    return 0;
}
