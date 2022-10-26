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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int first = 0 , one = 0, fi =-1;
        int sec = 0 , two = 0, si =-1;
        for(int i = 0 ; i < n ; ++i){
            cin>>arr[i];
            if(i == 0){
                // first ele
                first = arr[i];
                fi = i;
                one++;
            }else{
                if(arr[i] == first){
                    one++;
                }else{
                    sec = arr[i];
                    two++;
                    si = i;
                }      
            }
            
        }

        if(one == 1) cout<<fi+1<<endl;
        else cout<<si+1<<endl;
    }
    return 0;
}


