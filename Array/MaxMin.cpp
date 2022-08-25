#include<iostream>
using namespace std;

int maxx(int arr[],int n){
    int s = 0;
    int e = n-1;
    int maxi = INT32_MIN;
    int mini = INT32_MAX;
    for(int i = 0 ; i<n;i++){
        if(maxi<=arr[i]){
            maxi = arr[i];
        }
    }
    cout<<maxi<<endl;
    
}
int minn(int arr[],int n){
    int s = 0;
    int e = n-1;
    int maxi = INT32_MIN;
    int mini = INT32_MAX;
    for(int i = 0 ; i<n;i++){
        if(mini>=arr[i]){
            mini = arr[i];
        }
    }
    cout<<mini<<endl;
}

int main(){
    int n,target;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"Max Value: "<<endl;
    maxx(arr,n);
    cout<<"Min Value: "<<endl;
    minn(arr,n);

    return 0;
}