#include<bits/stdc++.h>
using namespace std;
int pairSum(int arr[] , int n , int target){
    sort(arr,arr+n);
    int i = 0 , j = n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            cout<<"<"<<arr[i]<<" , "<<arr[j]<<">"<<endl;
            i++;
        }
        if(arr[i]+arr[j]>target){
            j--;
        }
        if(arr[i]+arr[j]<target){
            i++;
        }
    }
    return 0;
}

int main(){
    int arr[] = {3,1,4,5,9,13,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 14;
    pairSum(arr,n,target);
    return 0;

}