#include<iostream>
using namespace std;
int bruteForce(int a,int b){
    int ans = 1;
    for(int i = 0 ; i < b ; i++){
        ans = ans*a;
    }
    return ans;
}
int optemise(int a,int b){
    if(b%2==0){
        
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<bruteForce(a,b);
    return 0;
}