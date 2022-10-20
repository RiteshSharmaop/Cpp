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
    long long int x ;
    cin>>x;
    long long int count = 0;

    if(x <= 5) cout<<1<<endl;
    else {
        while( x > 0){
            if( x >= 5 ){
               x-=5;
                count++;
            }else if (x >= 4 ){
                 x-=4;
                count++;   
            }else if (x >= 3 ){
                 x-=3;
                count++;   
            }else if (x >= 2 ){
                 x-=2;
                count++;   
            }else {
                 x-=4;
                count++;   
            }
        }
        cout<<count <<endl;
    }
    return 0;
}