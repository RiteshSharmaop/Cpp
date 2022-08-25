#include<iostream>
using namespace std;

int Alter(int arr[] , int n){
    for(int i = 0 ; i < n-1 ; i=i+2){
        arr[i] = arr[i] ^ arr[i+1];
        arr[i+1] = arr[i] ^ arr[i+1];
        arr[i] = arr[i] ^ arr[i+1];
    }
}
int printArr(int arr[] , int n){
    for(int i = 0; i<n ; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n,target;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }
    
    Alter(arr,n);
    printArr(arr,n);
    return 0;
}