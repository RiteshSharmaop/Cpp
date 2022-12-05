#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 +10;
int arr[N];
// int main() {
//     int n;
//     cin>>n;
//     for(int i = 1 ; i <=n ; i++){
//         cin>>arr[i];
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         int l,r;
//         cin>>l>>r;
//         long long int sum = 0;
//         for(int i = l ; i <= r ; i++){
//             sum += arr[i];
//         }
//         cout<<sum<<endl;
//     }
//     // T.C --> O(N) + O(q * N) or  O(q * r-l)
//     // O(N^2)
//     return 0;
// }

int pref[N];
/* Optimised Approach*/
int main(){
    long long int sum = 0;
    int n;
    cin>>n;
    for(int i = 1 ; i <=n ; i++){
        cin>>arr[i];
        sum += arr[i];
        pref[i] = sum;
    }
    int q;
    cin>>q;
    while(q--){
        int l , r;
        cin>>l>>r;
        cout<<(pref[r] - pref[l] )+ arr[l]<<endl;
    }
    return 0;
}