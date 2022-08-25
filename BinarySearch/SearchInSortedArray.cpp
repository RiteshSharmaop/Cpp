#include<bits/stdc++.h>
using namespace std;
int SearchSOrted(int arr[],int n,int target){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]>target){
            e = mid-1;
        }else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1; 

}
int main(){
    int arr[] = {-1, 0, 3, 5, 9, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>>target;
    cout<<SearchSOrted(arr,n,target);
    cout<<endl;
    return 0;
}
