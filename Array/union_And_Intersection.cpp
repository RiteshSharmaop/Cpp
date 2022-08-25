#include<iostream>
using namespace std;
void unionn( int arr1[] , int arr2[] , int m , int n ){

    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
 
        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
 
        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }
 
    /* Print remaining elements of the larger array */
    while (i < m)
        cout << arr1[i++] << " ";
 
    while (j < n)
        cout << arr2[j++] << " ";
    
}
int inter(int arr1[], int arr2[],int n, int m){
    for(int i = 0 ; i < m; i++){
        for(int j = 0; j <n ; j++){
            if(arr1[i]==arr2[j]){
                cout << arr1[i] <<" ";
            }
        }
    }
}
int main(){
    
    int arr1[] = {2,3,5,7};
    int arr2[] = {3,4,5,6,7};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    // unionn(arr1,arr2 ,m,n);
    // for(int i = 0 ; i< s2; i++){
    //     cout<<arr[i];
    // }
    inter(arr1,arr2,n,m);

    return 0;
}