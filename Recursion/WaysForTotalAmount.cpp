#include<bits/stdc++.h>
using namespace std;
// Love B approach
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

int main(){
    int coin[] = {1,2};
    int size = 2;
    int amount = 4 ;
    cout<<totalWays(coin,amount,size);
    return  0;
}