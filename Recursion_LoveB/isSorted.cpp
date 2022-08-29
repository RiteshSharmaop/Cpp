#include<iostream>
using namespace std;
bool isSorted(int i,int n,int arr[]){
    if(i>=n){
        return true;
    }
    if(arr[i]>=arr[i+1]){
        return false;
    }
    return isSorted(i+1,n,arr);

    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    if(isSorted(0,n,arr)) cout<<"Sorted"<<endl;
    else cout<<"Non-Sorted"<<endl;
    return 0;
}