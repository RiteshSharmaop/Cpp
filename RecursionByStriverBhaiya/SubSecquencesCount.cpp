#include<bits/stdc++.h>
using namespace std;
int CountOfSubSequnces(int i,int arr[] , int k,int n,int count,int sum){
    if(i>=n ){
        // Condition Satisfied
        if(sum==k) 
            return 1;

        // Condition Not Satisfied
        return 0;
    }
    sum += arr[i];

    int l =CountOfSubSequnces(i+1,arr,k,n,count,sum);
    sum -= arr[i];
    int r =  CountOfSubSequnces(i+1,arr,k,n,count,sum);
    return l+r;
    
    // T.c --> O(2n)
    // S.C --> O(n)
}
int main(){
    int arr[] = {1,2,1};
    int k = 2;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<CountOfSubSequnces(0,arr, k,n,0,0);
    return 0;
}