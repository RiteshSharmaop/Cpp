#include<bits/stdc++.h>
using namespace std;

// Two Pointers
void Reverse(int s , int e,int arr[]){
    if(s>=e){
        return;
    }
    swap(arr[s],arr[e]);
    Reverse(s+1,e-1,arr);
}

// One Pointers
void onePointer(int i,int n,int arr1[]){
    if(i>=n/2){
        return;
    }
    swap(arr1[i],arr1[n-i]);
    onePointer(i+1,n,arr1);
}


// Array Print
void print(int arr[],int e){
    for(int i = 0 ; i < e+1 ; i++){
        cout<<arr[i] <<" ";
    }
}

// Array1 Print
void printe(int arr1[],int e){
    for(int i = 0 ; i < e+1 ; i++){
        cout<<arr1[i] <<" ";
    }
}
int main(){
    int arr[] = {1,2,3,4,2};
    int arr1[] = {1,2,3,4,2};
    int s = 0;
    int e = sizeof(arr)/sizeof(arr[0])-1;
    cout<<"Two - Pointer : "<<endl;
    Reverse(s,e,arr);
    print(arr,e);
    cout<<endl;
    cout<<"One - Pointer : "<<endl;
    onePointer(s,e,arr1);
    printe(arr,e);
    return 0;
}