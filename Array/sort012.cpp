#include<iostream>
using namespace std;
int sortZOT(int arr[] , int n){
    int zero = 0;
    int one = 0;
    int two = 0;

    for(int i = 0 ; i<n ; i++){
        if(arr[i]==0){
            zero++;
        }else if( arr[i] == 1){
            one++;
        }else{
            two++;
        }
    }
    while(zero--){
        cout<<0;
    }
    while(one--){
        cout<<1;
    }
    while(two--){
        cout<<2;
    }
}
int main(){
    int arr[] = {1,0,2,1,0,0,1,2,0,2,2,1,0,0,0,1};
    int n = 16;
    sortZOT(arr,n);
}