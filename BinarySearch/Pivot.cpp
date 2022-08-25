#include<bits/stdc++.h>
using namespace std;
int Pivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0] ){
            s = mid+1;
        }else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    cout<<"Pivot 1 : ";
    cout<< arr[s-1]<<endl;    // Pivot 1
    cout<<"Pivot 2 : ";
    return arr[s];    // Pivot 1
}
int main(){
    int arr[] =  {7,8,9,10,12,15,99,5,6};
    // int arr[] = {3,5,3,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<Pivot(arr,n);
    return 0;
}