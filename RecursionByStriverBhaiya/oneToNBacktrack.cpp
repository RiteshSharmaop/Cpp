#include<bits/stdc++.h>
using namespace std;
void oneToN(int n){
    if(n==0){
        return;
    }
    oneToN(n-1);
    cout<<n<<endl;
}
void NtoOne(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    NtoOne(n-1);
}
int main(){
    int n = 5;
    // oneToN(n);
    NtoOne(n);
    return 0;
}