#include<iostream>
using namespace std;
int isSorted(int sum,int n,int arr[]){
    if(n<0){
        return sum;
    }
    sum = sum+arr[n];
    return isSorted(sum,n-1,arr);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int sum = 0;
    cout<<isSorted(sum,n-1,arr);
    return 0;
}