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
int ans(int arr[],int max,int target,int n){
    int s = 0;
    int e = max;
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
    
    int arr[] = {20,15,10,17};
    int target;
    cin>>target;
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = *max_element(arr,arr+n);

    cout<<ans(arr,max,target,n);
    return 0;
}