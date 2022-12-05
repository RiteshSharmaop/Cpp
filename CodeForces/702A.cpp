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
    int arr[n];
    int count = 0 , maxi = -1 ;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(arr[i] != 0 && arr[i] > arr[i-1]){
            count++;
        }else{
            count = 1;
        }
        maxi = max(maxi , count);
    }
    cout<<maxi<<endl;
    return 0; 
}