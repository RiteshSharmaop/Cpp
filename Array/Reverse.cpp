#include<iostream>
using namespace std;
int reverseArr(int arr[],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        arr[s] = arr[s] ^ arr[e];
        arr[e] = arr[s] ^ arr[e];
        arr[s] = arr[s] ^ arr[e];
        
        s++;
        e--;
    }
}
int prinnt(int arr[],int n){
    for(int i = 0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }

    cout<<"Reverse: "<<endl;
    reverseArr(arr,n);
    prinnt(arr,n);

    return 0;
}