#include<iostream>
using namespace std;
bool LinearSearch(int arr[],int n,int target){
    for(int i = 0 ; i<n; i ++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
int reverseArr(int arr[],int n,int target){
    int s = 0;
    int e = n-1;
    while(s<=e){
        arr[s] = arr[s] ^ arr[e];
        arr[e] = arr[s] ^ arr[e];
        arr[s] = arr[s] ^ arr[e];
        
        s++;
        e--;
    }
}
int prinnt(int arr[],int n){
    for(int i = 0 ; i<n ; i++){
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
    cin>>target;
    cout<<"Linear Search: "<<LinearSearch(arr,n,target)<<endl;

    cout<<"Reverse: "<<endl;
    reverseArr(arr,n,target);
    prinnt(arr,n);

    return 0;
}