#include<bits/stdc++.h>
using namespace std;
int Searching(int arr[],int target,int n){
    if(arr[0]==target){
        return 0 ;
    }
    if(n<0){
        return -1;
    }
    // Processing
    if(arr[n]==target){
        return n;
    }
    // Recurance Relation
    Searching(arr,target,n-1);
}

bool Search(int arr[],int target,int n ){
    // base case
    
    if(arr[n]==target){
        return true;
    }
    if(0>n){
        return false;
    }

    Search(arr,target,n-1);
}
int search(int arr[],int target,int n,int i/*int i = 0*/){
    
    if(arr[i]==target){
        return i;
    }
    if(i>n){
        return -1;
    }
    search(arr,target,n,i+1);
}
int main(){
    
    int arr[] = {4,2,6,9,1,0,12};
    int target = 1;
    int n = 7;
    int i = 0;

    // cout<<Searching(arr,target,n);
    // if(Search(arr,target,n)){
    //     cout<<"T"<<endl;
    // }else{
    //     cout<<"False";
    // }

    cout<<search(arr,target,n,i);
    return  0;
}