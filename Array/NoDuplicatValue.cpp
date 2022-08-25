#include<iostream>
using namespace std;
int noDupli(int arr[],int n  ){
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum = arr[i] + sum; 
    }
    int sn = (n *(n + 1) );
    sn = sn/2;
    int ans = sum - sn;
    return ans;

}
int main(){
    int n = 8;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    
    cout << noDupli(arr,n);
    
    return 0;
}