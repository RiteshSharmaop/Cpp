#include<iostream>
using namespace std;
void print(int arr[] , int n){
    for(int i = 0 ; i < n ;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void BubbleSort(int arr[] , int n){
    print(arr,8);
    if(n==0 || n==1) return;
     bool flag = false;
    for(int i = 0 ; i < n-1 ;i++){
        if(arr[i]>arr[i+1]) {
         swap(arr[i],arr[i+1]);
         flag = true;
        }
    }
    if(flag == false){
        return ;
    }
    BubbleSort(arr,n-1);
}

int main(){
    int arr[] = {95,6,5,4,53,32,56,88};
    int n = sizeof(arr)/sizeof(arr[0]);
   
    BubbleSort(arr,n);
    print(arr,n);
    return 0;
}