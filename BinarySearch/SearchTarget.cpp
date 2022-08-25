#include<bits/stdc++.h>
using namespace std;
bool search(int arr[],int target,int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return true;
        }else if(arr[mid]>target){
            e = mid-1;
        }else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return false;
}
int main(){
    int arr[] = {1,2,5,6,8,9,15,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>>target;
    if(search(arr,target,n)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    cout<<binary_search(arr,arr+n,16);
    return 0;
}
