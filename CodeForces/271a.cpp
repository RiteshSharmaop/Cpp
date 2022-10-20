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
    int y;
    cin>>y;
   
    while(true){
        y+=1;
        int a = y / 1000;
        int b = y/100;
        b %=10;
        int c = y/10%10;
        int d = y%10;
        if(a!=b && b!=c && c!=d && d!=a && a!=c && b!=d){
            break;
        }
    }
    cout<<y<<endl;
        

    return 0;
}
