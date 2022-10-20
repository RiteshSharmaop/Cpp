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
    int arr[6][6];
    int f = -1 , l = -1 ;
    bool flag = false;
    for(int i = 1 ; i<= 5 && flag == false ; i++){
        for(int j = 1 ; j<= 5 && flag == false ; j++){
            cin>>arr[i][j];
            if(arr[i][j] == 1 ){
                f = i;
                l = j;
                int ans = 0;
                if(f <= 3){
                    ans = 3 - f; 
                }else {
                    ans = f - 3;
                }
                if(l <= 3){
                    ans += 3 - l; 
                }else {
                    ans += l - 3;
                }
                cout<<ans<<endl;
                flag = true;
            }
        
        }
    }
    return 0;
}