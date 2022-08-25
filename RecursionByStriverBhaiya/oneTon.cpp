#include<iostream>
using namespace std;
void OneToN(int n,int i){
    if(i>n){
        return;
    }
    cout<<i<<" ";
    OneToN(n,i+1);
}
int main(){
    int n;
    cin>>n;
    int i = 1;
    OneToN(n,i);
    
    return 0;
}