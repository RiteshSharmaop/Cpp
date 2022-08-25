#include<bits/stdc++.h>
using namespace std;
int FixedD(int arr[],int n){
    // TLE Leetcode
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            ans  = mid;
            return ans;
        }
        if(arr[mid]>arr[mid-1]){
        // if(arr[mid]>arr[mid-1] && arr[mid]>ans){
            ans = mid;
            s = mid+1;
        }else if(arr[mid]>arr[mid+1] ){
        // }else if(arr[mid]>arr[mid+1] && arr[mid]>ans){
            ans = mid;
            e = mid-1;

        }
       
        mid = s+(e-s)/2;
    }
    return -1; 

}
int PeakElement(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<e/* here we dont use ( <= ) because if we use equal sign then the code stuck at lastelement */){
        if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }else{
            e = mid;
            
        }
        mid = s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[] = {15,17,18,21,23,29,30,35,38,99,50,40,30,20};
    // int arr[] = {3,5,3,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<FixedD(arr,n);
    cout<<endl;
    cout<<PeakElement(arr,n);
    return 0;
}
