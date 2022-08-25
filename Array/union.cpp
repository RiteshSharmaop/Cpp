#include<iostream>
using namespace std;
void unionn(int arr1[] , int arr2[],int n,int m){
    int i = 0 , j =0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
        cout<<arr1[i] <<" ";
        i++;
        j++;
        }else if(arr1[i]<arr2[j]){
            cout<<arr1[i] <<" ";
            i++;
        }else{
            cout<<arr2[j] <<" ";
            j++;
        }
    }
    while(i<n){
        cout<<arr1[i] <<" ";
        i++;
    }
    while(j<m){
        cout<<arr2[j] <<" ";
        j++;
    }
    cout<<endl;
    
}
int inter(int arr1[] , int arr2[],int n){

    for(int i = 0 ; i< n ; i++){
        if(arr1[i]==arr2[i]){
            cout<<arr1[i]<<endl;
        }
    }
}
int main(){
    int arr1[] = {1, 3, 4, 5, 7};
    int arr2[] = {2, 3, 5, 6};
    
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    unionn(arr1,arr2,n,m);
    inter(arr1,arr2,n);
    return 0;
}