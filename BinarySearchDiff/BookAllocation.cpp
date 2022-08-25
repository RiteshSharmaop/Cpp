#include<iostream>
using namespace std;
bool ispossibleSol(int mid, int arr[],int n){
    int sum = 0;
    int s = 0;
    int e = 100;
    int midd = s+(e-s)/2;
    while(s<=e){
        arr
        midd = s+(e-s)/2;
    }
}
int BookAlloca(int arr[],int n){
    int s = 0;
    int e = 100;
    int mid = s+(e-s)/2;
    int ans;
    while(s<=e){
        if(ispossibleSol(mid,arr,n)){
            ans = mid;
            e = mid-1;
        }else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
}
int main(){

    int arr[] = { 10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    return 0;
}