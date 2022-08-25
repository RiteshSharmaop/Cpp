#include<bits/stdc++.h>
using namespace std;
bool SearchInSortedAndRotated(int arr[],int n,int k){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            
            return true;
        }
        if(arr[mid]<k){
            e = mid-1;
        }else {
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return false;
    
}
int main(){
    int arr[] =  {7,9,1,2,3};
    // int arr[] = {3,5,3,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;

    if(SearchInSortedAndRotated(arr,n,k)){
        cout<<"Y";
    }else{
        cout<<"N";
    }
    return 0;
}