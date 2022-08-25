#include<bits/stdc++.h>
using namespace std;
int swapRequired(int arr[] , int k, int n){
    int swapReq = 0;
    int i = 0;
    int j = n-1;
    while(i<j){
        while(arr[i]<=k){
            i++;
        }
        if(arr[i]>k && arr[j]<=k){
            swap(arr[i],arr[j]);
            swapReq++;
            i++;
            j--;
        }
    }
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

void lessEqlK(int arr[],int k,int n){
    int count = 0;
    for(int i = 0 ; i<n ; i++){
        for(int j = i ; j<n ; j++){
            if(arr[j]<=k){
                swap(arr[i],arr[j]);
                count++;
            }
        }
    }
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<count<<endl;

}
void countSwap(int arr[],int k , int n){
    int count = 0;

    for(int i = 0; i<n ; i++){
        if(arr[i]<=k){
            count++;
        }
    }

    int bad = 0;
    int i = 0;
    int j = count;
    // while(j!=n){
    //     if(arr[i]<=k){
    //         bad++;
    //     }
    // }

    cout<<bad;
}
// void kkswap(int arr[],int k,int n){
//     // Finding Size of Window
//     int count = 0;
//     for(int i = 0; i<n;i++){
//         if(arr[i]<=k){
//             count++;
//         }
//     }
//     // making Windows
//     int bad = 0;
//     int brr[10];
//     int mini = INT32_MAX;
//     for(int i =0;i<n ; i++){
//         bad = 0;
//         for(int j = i ; j<count;j++){
//             if(arr[j]<=k){
//                 bad++;
//             }
//         }
//         for(int i = 0 ; i<10 ; i++){
//             if(mini>bad){
//                 mini  = bad;
//             }
//         }
//     }
//         cout <<bad<<endl;

    
    
// }
int main(){
    int arr[] = {2,1,5,6,3};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    // cout<< swapRequired(arr,k,n);
    // lessEqlK(arr,k,n);
    // kkswap(arr,k,n);
    countSwap(arr,k,n);
    return 0;
}