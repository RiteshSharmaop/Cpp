#include<bits/stdc++.h>
using namespace std;
int dupli(int arr[],int n){
    // TimeComplexity = O(nlogn)
    sort(arr,arr+n);
    for(int i = 0 ; i< n ; i++){
        if(arr[i]==arr[i+1]){
            cout<<arr[i];
            return 0;
        }
    }
}
int dupli2(int arr[] , int n){
    for(int i = 0 ; i< n ; i++){

    }
}
int main(){
    int arr[] = {1,3,4,2,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    dupli(arr,n);
    return 0;
}