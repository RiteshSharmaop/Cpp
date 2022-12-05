#include<bits/stdc++.h>
using namespace std;

void init_code() {
// fast_io;
#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE 
}
#define ll long long int
int main() {
    init_code();
    
    int n;
    cin>>n;
    long long int sum = 0;
    int count = 0;
    int i = 1 , tot = 0;
    while(tot < n ){

        // cout<<"Sum bef : "<<sum<<endl;
        sum += i;
        tot += sum;
        // cout<<"Sum : "<<sum<<endl;
        if(tot > n) break;
        // cout<<".Count++................"<<endl;
        count += 1;
        // cout<<"count : "<<count<<endl;
        i++; 
        // cout<<"----------------------------------------"<<endl;
    }
    
    cout<<count<<endl;
    return 0; 
}