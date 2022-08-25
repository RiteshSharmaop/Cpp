#include<iostream>
using namespace std;
// Approach 1
// void allNeg(int arr[] , int n){
//     for(int i = 0 ; i< n ; i++){
//         for(int j = i+1 ; j<n ; j++){
//             if(arr[i] > arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
//     for(int i = 0 ; i< n ; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
    
// }
// Approach 2
void allNeg2(int arr[] , int n){
    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j < n ; j++){
            // if(arr[j] >0){   //All -ve at Left
            if(arr[i] < 0){   //All -ve at Left
            // if(arr[j] <0){      //All +ve at Left
            // if(arr[i] >0){         //All +ve at Left
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i = 0 ; i< n ; i++){
        cout << arr[i] << " ";
    }
    
}
int main(){
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = 9;
    // allNeg(arr,n);
    allNeg2(arr,n);
    return 0;
}