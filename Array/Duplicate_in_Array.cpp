#include<bits/stdc++.h>
using namespace std;
int dupli(int arr[] , int n ){
    cout<<"Time Complexity --> O(n2) : "<<endl;
    for(int i = 0 ; i<n ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(arr[i] == arr[j]){
                cout << arr[i]<<endl;;
            }
        }
    }
}
void dupliOn(int arr[] , int n ){
    sort(arr, arr + n);
    cout<<"Time Complexity --> O(nlogn) : "<<endl;
    for(int i = 0 ; i<n ; i++){
        if(arr[i]==arr[i+1]){
            cout<<arr[i]<<endl;
        }
    }
}
int main(){
    int n;
    n = 5;
    int arr[] = {1,6,3,6,1};

    dupliOn(arr,n);
    dupli(arr,n);

    return 0;
}