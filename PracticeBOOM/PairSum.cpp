#include<iostream>
#include<algorithm>
using namespace std;
int PairSumOn(int arr[],int target,int n){

    for(int i = 0 ; i<n ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(arr[i]+arr[j]==target){
                cout<<i<<" ";
                return j;
            }
        }
    }
}
int nlogn(int arr[],int target,int n){
    sort(arr,arr+n);
    int s = 0 , e = n-1;
    while(s<=e){
        if(arr[s]+arr[e]==target){
            cout<<s<<" ";
            return e;
        }
        if(arr[s]+arr[e]>target){
            e--;
        }else{
            s++;
        }
    }
    return -1;
}
int main(){
    int arr[] = { 8,4,5,9,9,6};
        int n = sizeof(arr)/sizeof(arr[0]);
    int target ;
    cin>>target;
    // cout<<PairSumOn(arr,target,n);
    cout<<nlogn(arr,target,n);
    return 0;
}