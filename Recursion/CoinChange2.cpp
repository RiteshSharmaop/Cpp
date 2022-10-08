#include<bits/stdc++.h>
using namespace std;
int Ways(int i,int sum,int n,int coin[],int amount ,vector<int>& v){
    if(i>=n){
        if(amount == sum){
            // for(auto j : v) cout<< j <<" ";
            // cout<<endl;
            return 1;
        }
    return 0;
    }
    // if(sum==amount) {
    //         for(auto j : v) cout<< j <<" ";
    //         cout<<endl;
    //     return 1;
    // }
    if(sum>amount) {

        return 0;
    }
    sum += coin[i];
    v.push_back(coin[i]);
    int l = Ways(i,sum,n,coin,amount,v);

    sum -= coin[i];
    v.pop_back();
    int r = Ways(i+1,sum,n,coin,amount,v);

    return l+r;
}
int main(){
    int coin[] = {2,4};
    vector<int> v;
    int amount = 8;
    
    cout<<Ways(0,0,2,coin,amount,v);
    return 0;
}



//  Leet Code --> Coin Change 2



// class Solution {
// private:
//     int Ways(int i,int sum,int n,vector<int>& coins,int amount ,vector<int>& v){
//     if(i>=n){
//         if(amount == sum){
            
//             return 1;
//         }
//     return 0;
//     }
//     if(sum==amount) {
            
//         return 1;
//     }
//     if(sum>amount) {

//         return 0;
//     }
//     sum += coins[i];
//     v.push_back(coins[i]);
//     int l = Ways(i,sum,n,coins,amount,v);

//     sum -= coins[i];
//     v.pop_back();
//     int r = Ways(i+1,sum,n,coins,amount,v);

//     return l+r;
// }
// public:
//     int change(int amount, vector<int>& coins) {
//         int n = coins.size();
//         vector<int> v;
//         return Ways(0,0,n,coins,amount,v);
    
//     }
// };