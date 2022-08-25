#include<iostream>
using namespace std;
int peak(int arr[],int n){
    int s = 0;
    int e  = n-1;
    int mid = s+(e-s)/2;
    

}
int main(){
    int arr[] = {6,7,8,9,1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<peak(arr,n);

    return 0;

}