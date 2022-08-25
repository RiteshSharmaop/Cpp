#include<iostream>
using namespace std;
void rotateA(int arr[],int n){
    arr[0] = 0;
    swap(arr[0],arr[n]);
    cout << "["<<" ";
    for(int i = 0; i< n ; i++){
        cout<<arr[i]<<" ";
    }
    cout << "]"<<" ";
}
void approachSec(int arr[],int n){
    int i = 0 , j = n-1;
    

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 1 ; i<=n ; i++){
        cin>>arr[i];
    }
    
    rotateA(arr,n);
    return 0;

}