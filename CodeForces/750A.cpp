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
    int n,k;
    cin>>n>>k;
    int count  = 0;
    int totalTime = 240;
    int remTime = 240 - k;
    for(int i = 1 ; i <= n ; i++){
        int temp = 5*i;
        if(temp > remTime) break;
        remTime -= temp;
        count++;
    }
    cout<<count<<endl;
    return 0;
}


