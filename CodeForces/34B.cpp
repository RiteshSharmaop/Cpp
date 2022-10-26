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
    int n,m;
    cin>>n>>m;
    int arr[n];
    int ne = 0 , ze = 0;
    for(int i = 0 ; i < n ; ++i){
        cin>>arr[i];
        if(arr[i] == 0 ) ze++;
        else if (arr[i] < 0) ne++;
    }
    
    sort(arr, arr+n);
    int sum = 0;
    for(int i = 0 ; i < m ; i++){
        if(arr[i]< 0 || arr[i] ==0) sum+=arr[i];
    }
    cout<<abs(sum)<<endl;
    return 0;

}

