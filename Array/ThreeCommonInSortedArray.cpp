#include<bits/stdc++.h>
using namespace std;
bool commonIn3Array(int arr1[],int arr2[],int arr3[]){
    int n =6;
    int arr[5];
    int k;
    for(int i =0 ; i<n ; i++){
        for(int j = 0 ; j<5 ; j++){
            if(arr1[i]==arr2[j] == arr3[i] ){
                arr[i]=arr1[i];
            }
        }
    }

    
    return true;
    return false;
}
void common(int arr1[] , int arr2[] ,int arr3[]){
    int n = 7;
    // TimeComplexity --> O(n^3)
    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j< 4 ; j++){
            for(int k = 0 ; k< n ; k++){
                if(arr1[i]==arr2[j]==arr3[k]){
                    cout<<arr1[i]<<endl;
                }
            }
        }
    }
}
int main(){
    int arr1[] = {1, 5, 10, 20, 40, 80};
    int arr2[] = {6, 7, 20, 80, 100};
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    // int arr[1co0];

    cout<<commonIn3Array(arr1,arr2,arr3);
    // common(arr1,arr2,arr3);
    return 0;
}