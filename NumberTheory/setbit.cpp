#include<bits/stdc++.h>
using namespace std;
int main() {
    int a = 5;
    int bit;
    cin>>bit;
    int k = 1<<bit;
    cout<<k<<endl;
    if((a&k) != 0 ) cout<<"Set"<<endl;
    else cout<<"Unset"<<endl;

    int a = 9;
    int i = 1;
    int k = 1<<i;
    if(a&k != 0) cout<<"Set"<<endl;
    else cout<<"Un-Set"<<endl;

    return 0;
}