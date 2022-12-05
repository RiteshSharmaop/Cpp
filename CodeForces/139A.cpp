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
    int arr[7];
    for(int i = 0 ; i < 7 ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i < 7 ; i++){
        n -= arr[i];
        if(n <= 0){
            cout<<i+1<<endl;
            break;
        }
        if(i==6)
            i=-1;

    }
   
    return 0; 
}
