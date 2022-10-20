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
    int n;
    cin>>n;
    int arr[n][3];
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        int one = 0;
        for(int j = 0 ; j<3 ; j++){
            cin>>arr[i][j];
            if(arr[i][j] == 1) one++;
        }
        if(one >= 2) count++;
    }
    cout<<count<<endl;

    return 0;
}