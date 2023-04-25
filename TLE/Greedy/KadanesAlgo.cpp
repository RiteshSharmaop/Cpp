#include<iostream>
using namespace std;
int kadanes(int arr[] , int n){
    int cur = 0;
    int max = 0;
    int start = 0 , end = 0 ,s;
    for(int i = 0 ; i < n ; i++){
        cur = cur + arr[i];
        if(cur>max){
            max = cur;
            start = s;
            end = i;
        }
        if(cur<0){
            cur = 0;
            s = i+1;
        }
    }
    cout << start <<" " << end << " "<<endl;
    return max;
}
int kadnesss(int arr[],int n){
    int maxi = 0;
    int cur = 0;
    for(int i = 0 ; i< n ; i++){
        cur = arr[i]+cur;
        if(cur>maxi){
            maxi = cur;
        }
        if(cur < 0){
            cur =0;
        }
    }
    return maxi;
}
int main(){
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<kadanes(arr,8);
    cout<<kadnesss(arr,n);
    
    
    return 0;
}