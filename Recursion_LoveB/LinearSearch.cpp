#include<iostream>
using namespace std;
void printArr(int arr[],int n){
    for(int i = 0 ; i < n ; i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
bool LinearSearch(int arr[],int key,int size){
    printArr(arr,size);
    if(size == 0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }else{
        return LinearSearch(arr+1,key,size-1);
    }
}
bool MyApproach(int arr[],int key , int size){
    printArr(arr,size);
    if(size == 0) return false;
    if(arr[size] == key) return true;
    return MyApproach(arr,key,size-1);
}
int LinearSearchIndex(int i , int arr[],int key , int size ){
    if(size == i) return -1;
    if(arr[i] == key) return i;
    return LinearSearchIndex(i+1,arr,key,size);
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int key = 4;
    int size = 6;
    if(LinearSearch/* MyApproach*/(arr,key,size)) cout<<"Found"<<endl;
    else cout<<"Not - Found"<<endl;
    // cout<<LinearSearchIndex(0,arr,key,size);
     return 0;
}