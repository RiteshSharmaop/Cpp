#include<iostream>
using namespace std;
int expo(int n,int a){
    // Base Case
    if(n==0){
        return 1;
    }
    int cp = expo(n>>1,a); // n>>1 = n/2 but n>>1 is faster
    if(n&1==1){
        return cp*cp*a;
    }else{
        return cp*cp;
    }
}
int main(){
    int n,a;
    cin>>a>>n;
    cout<<expo(n,a);
    return 0;
}