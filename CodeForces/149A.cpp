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
    
    ll k ;
    cin>>k;
    int months[12];
    int total = 0;
    for(int i = 0 ; i < 12 ; i++){
        cin>>months[i];
        total += months[i];
    } 
    if(total < k){
        cout<<-1<<endl;
        return 0;
    }
    sort(months , months+12 , greater<int> ());

    int tot = 0;
    int count = 0;
    int i = 0;
    while(tot < k ){
        tot += months[i];
        count++;
        i++;
    }
    cout<<count<<endl;
    return 0; 
}