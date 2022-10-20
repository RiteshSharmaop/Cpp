#include<bits/stdc++.h>
using namespace std;

void init_code() {
// fast_io;
#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);

#endif // ONLINE_JUDGE 
}
int main() {
    init_code();
    long long int n;
    cin>>n;
    long long int count  = 0;
    int a[5] = {100,20,10,5,1};
    for(int i = 0 ; i< 5 ; i++){
        count += n/a[i];
        n %=a[i];
    }
    cout<<count<<endl;
    return 0;
}
