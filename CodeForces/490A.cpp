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
    
    int n,o ,t,th ;
    cin>>n;
    int arr[n];
    o = t = th =0;
    vector<int> one;
    vector<int> two;
    vector<int> three;
    for(int i = 0 ; i < n ; ++i){
        cin>>arr[i];
        switch(arr[i]){
            case 1 :
                o++;
                one.push_back(i);
                break;
            case 2 :
                t++;
                two.push_back(i);
                break;
            default:
                three.push_back(i);
                th++;
        }
    }
    if(o == 0 || t == 0 || th == 0){
        cout<<0<<endl;
        return 0;
    }
    int ans = min(o,min(t , th));
    cout<<ans<<endl;
    int i = 0;
    while(ans--){
        cout<<one[i]+1<<" "<<two[i]+1<<" "<<three[i]+1<<endl;
        i++;
    }
    return 0;
}


