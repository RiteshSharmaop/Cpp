#include<bits/stdc++.h>
using namespace std;
bool isPossibleSol(int arr[],int target,int mid , int n ){
    int sum = 0;
    for(int i = 0 ; i<n;i++){
        int diff = 0;
        if(arr[i]>mid){
            diff = arr[i] - mid;
        }
        sum = sum+diff;
    }
    if(sum>=target){
        return true;
    }else{
        return false;
    }
}
int ans(int arr[],int target,int n){
    sort(arr,arr+n); 
    int s = 0;
    int e = arr[n-1];
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(isPossibleSol(arr,target,mid,n)){
            ans = mid;
            s = mid+1;
        }else{
            e = mid-1;
        }
    }
    return ans;
}
int main(){
    
    int arr[] = {15,8,18,6};
    int target;
    cin>>target;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<ans(arr,target,n);
    return 0;
}