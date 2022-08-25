#include<bits/stdc++.h>
using namespace std;
int Fixed(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==mid){
            return mid;
        }
        if(arr[mid]>mid){
            e = mid-1;
        }else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1; 

}
int FixedD(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==mid){
            return mid;
        }
        if(arr[mid]>mid){
            e = mid-1;
        }else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1; 

}
int main(){
    int arr[] = {-10,-5,0,2,4,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<Fixed(arr,n);
    cout<<endl;
    return 0;
}
