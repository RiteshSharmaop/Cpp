#include<iostream>
using namespace std;
void print(int arr[],int e){
    for(int i = 0 ; i <= e ; i++){
        cout<<arr[i]<<" ";
    }cout <<endl;
}
bool BinarySearch(int arr[] , int s , int e , int key){
    print(arr,e);
    // If Element Not Found

    if(s>e) return false;
    
    int mid = s+(e-s)/2;
    cout<< "Mid is: "<<arr[mid]<<endl;
    // If Element get
    if(arr[mid] == key ) return true;

    if(arr[mid]<key) return BinarySearch(arr,mid+1,e,key);
    else BinarySearch(arr,s,mid-1,key);
}
int main(){
    int arr[] = {2,4,6,10,14,18,20};
    int key = 2;
    int size = 7;
    int s = 0;
    int e = size-1;
    if(BinarySearch(arr,s,e,key)) cout<<"Found"<<endl;
    else cout<<"Not - Found"<<endl;
     return 0;
}