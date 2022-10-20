

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
    int arr[n+1][m+1];
    
    for(int i = 1 ; i <= n ; i++){
        if(i %2  != 0){
            for(int j = 1 ; j <= m ; j++)cout<<"#";
        }
        if(i%2 == 0 && i % 4 != 0 ){
            for(int j = 1 ; j < m ; j++)cout<<".";

            cout<<'#';

        }
        if(i%2 == 0 && i % 4 == 0){
            cout<<'#';
            for(int j = 1 ; j < m ; j++)cout<<".";
        }
        cout<<endl;
    }
    return 0;
}