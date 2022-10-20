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
    long long a,b;
    cin>>a>>b;
    if(b <= (a+1) / 2 ){
        cout << b * 2 - 1 << endl;
    }else {
        cout << (b - (a + 1) / 2) * 2 << endl;
    }
    return 0;
}
