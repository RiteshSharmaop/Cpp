#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0, j = n-1 ; i<j ; i++,j--){
        swap(arr[i],arr[j]);
    }
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i] <<" "<<endl;
    }
    return 0;
}