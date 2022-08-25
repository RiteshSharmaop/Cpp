#include<iostream>
using namespace std;
void printArr(int arr[],int n){
    for(int i = 0 ; i< n; i++){
        cout<< arr[i]<<" ";
    }
}
/*
void selectionSort(int arr[],int n){
    for(int i = 0 ; i < n-1 ; i++){
        int minindex = i;
        for(int j = i+1 ; j < n; j++){
            if(arr[minindex]>arr[j]){
                minindex = j;
            }
        }
        // swap(arr[i],arr[minindex]);
        
    }
}
*/
void selectionSort(int arr[],int n){
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = i+1 ; j < n; j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        } 
    }
}

int main(){
    // Not Stable Algo
    int arr[] = {88,5,2,3,6,4,7,9,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    

    selectionSort(arr,n);
    printArr(arr,n);
    return 0;
}