#include<iostream>
using namespace std;
void printArr(int arr[],int n){
    for(int i = 0 ; i< n; i++){
        cout<< arr[i]<<" ";
    }
}
void bubbleSort(int arr[],int n){
    for(int i = 0 ; i < n-1 ; i++){
        int swapped = false;
        for(int j = 0 ; j < n-1-i; j++){
            if(arr[j]>arr[j+1] && arr[j]!=arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

int main(){
    int arr[] = {1,5,6,2,5,6,2,2,26,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    

    bubbleSort(arr,n);
    printArr(arr,n);
    return 0;
}