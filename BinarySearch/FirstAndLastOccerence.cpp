#include<bits/stdc++.h>
using namespace std;
int firstOc(int arr[],int target,int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==target){
            ans = mid;
            e = mid - 1;
        }else if(arr[mid]>target){
            e = mid-1;
        }else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans; 
}
int LastOc(int arr[],int target,int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==target){
            ans = mid;
            s = mid + 1;
        }else if(arr[mid]>target){ 
            e = mid-1;
        }else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;

}
int main(){
    int arr[] = {1,2,5,5,5,5,5,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>>target;
    cout<<firstOc(arr,target,n);
    cout<<endl;
    cout<<LastOc(arr,target,n);
    // cout<<binary_search(arr,arr+n,target);
    return 0;
}
