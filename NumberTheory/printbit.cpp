#include<bits/stdc++.h>
using namespace std;
void printBitRepresent(int n){
    // for(int i = 10 ; i >= 0 ; i-- ){
    //     // cout<<" Mask : "<<(n>>i) << " n : " << n<<" i : " << i<<endl;
    //     cout<<((n >> i) & 1);
    // }cout<<endl;

    int i = 31;
    while(i--){
        cout<<" i  " << i << " " << ((n >> i) & 1)<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    printBitRepresent(n);
    return 0;
}