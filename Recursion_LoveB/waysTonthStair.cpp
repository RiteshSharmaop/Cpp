#include<iostream>
using namespace std;
int WaystoNthStair(int n){
    if(n<0) return 0;
    if(n==0) return 1;
    return WaystoNthStair(n-1) 
        + WaystoNthStair(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<WaystoNthStair(n);
    return 0;
}