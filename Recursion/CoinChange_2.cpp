#include<bits/stdc++.h>
using namespace std;
// MY Approach --> count Sequence
int Ways(int i,int sum,int n,int coin[],int amount ,vector<int>& v){
    if(i>=n){
        if(amount == sum){
            for(auto j : v) cout<< j <<" ";
            cout<<endl;
            return 1;
        }
    return 0;
    }
    if(sum==amount) {
            for(auto j : v) cout<< j <<" ";
            cout<<endl;
        return 1;
    }
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

// Love B Approach
// Not Optimise it may give Wrong Ans
int totalWays(int coin[],int amount,int size){
    if(amount==0){
        return 1;
    }
    if(amount<0){
        return 0;
    }
    int ways = 0;
    for(int i = 0 ; i<size;i++){
        ways += totalWays(coin,amount -coin[i],size);
    }
    return ways;
    // return totalWays(amount-1) +totalWays(amount-2); 
}

// Optimised
int totalWaysOptimised(int coin[],int amount,int size,int CurrentCoin){
    if(amount==0){
        return 1;
    }
    if(amount<0){
        return 0;
    }
    int ways = 0;
    for(int i = CurrentCoin ; i<size;i++){
        ways += totalWaysOptimised(coin,amount -coin[i],size,i);
    }
    return ways;
    // return totalWays(amount-1) +totalWays(amount-2); 
}

int main(){


    int coin[] = {2,4};
    vector<int> v;
    int amount = 8;
    
    cout<<"My Approach : "<<endl; 
    cout<<Ways(0,0,2,coin,amount,v)<<endl;

    // cout<<"Love BAbbar Approach (Not Optimised) : "; 
    // cout<<totalWays(coin, amount,2)<<endl;
    // cout<<"Love BAbbar Approach (Optimised) : "; 
    // cout<<totalWaysOptimised(coin, amount,2,0)<<endl;
    return  0;
}


