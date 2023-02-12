#include<bits/stdc++.h>
using namespace std;
void bruteForce(int arr[]  , int  k , int n){
    for(int i = 0 ; i < (n - k ) + 1  ; ++i){
        int ele = 0;
        for(int j = i ; j < i+k ; j++){
            if(arr[j] < 0){
                ele = arr[j];
                break;
            }
        }
        cout<<ele<<" ";
    }
}
int main() {
    int arr[] ={12, -1, -7, 8, -15, 30, 16, 28};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    bruteForce(arr , k , n);
    return 0;
}