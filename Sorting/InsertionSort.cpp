#include<iostream>
using namespace std;
void printArr(int arr[],int n){
    for(int i = 0 ; i< n; i++){
        cout<< arr[i]<<" ";
    }
}
void selectionSort(int arr[],int n){
    for(int i = 1 ; i < n ; i++){
        for(int j = i-1 ; j >=0; j--){
            int temp = arr[j];
            if(arr[i]<arr[j]){
                arr[j]=arr[i];
                arr[i] = arr[j];
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