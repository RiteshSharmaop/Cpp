#include<iostream>
using namespace std;
int MaxElement(int arr[],int n,int i,int maxi){
    
    if(i>n){
        return maxi;
    }
    // if(arr[i]>maxi){
    //     maxi = arr[i];
    // }
    maxi = max(arr[i],maxi);

    
    MaxElement(arr,n,i+1,maxi);
}

int main(){
    int arr[] = {98,56,8,9489,6,65,5,7,9,9,6,5,5,6,95,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int maxi = 0;
    cout<<MaxElement(arr,n,i,maxi);
    
    return  0;
}