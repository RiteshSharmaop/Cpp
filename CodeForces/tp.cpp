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
        int n,sum1,sum2;
        cin>>n;
        if(n%4 == 0){
            sum1 = sum2 = 0;
            cout<<"YES"<<endl;
            for(int i=2; i<=n; i+=2){
                cout<<i<<" ";
                sum1+=i;
            }
            for(int i=1; i<n-2; i+=2){
                cout<<i<<" ";
                sum2+=i;
            }
            cout<<sum1-sum2<<"\n";
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}


