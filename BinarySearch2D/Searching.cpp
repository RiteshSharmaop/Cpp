#include<iostream>
using namespace std;
bool binarysearch(int arr[][5],int n,int m,int row , int target){
    int s = 0;
    int e = n-1;
    int midd = s+(e-s)/2;
    while(s<=e){
        if(arr[row][midd]==target){
            return true;
        }else if(arr[row][midd]>target){
            e = midd - 1;
        }else{
            s = midd + 1;
        }
        midd = s+(e-s)/2;
    }
    return false;
}
bool binarySearch2D(int arr[4][5],int n,int m, int target){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid][0]<=target && target<=arr[mid][n-1]){
            return binarysearch(arr,n,m,mid,target);
           
        }
        if(arr[mid][0]>target){
            e = mid - 1;
        }
        if(arr[mid][0]<target){
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    return false;
}
// bool binarySearch2D(int arr[3][3],int n,int m, int target){
//     int s = 0;
//     int e = n-1;
//     int mid = s+(e-s)/2;
//     while(s<=e){
//         if(arr[mid][0]==target || arr[mid][n-1]==target){ 
//             return true;
//         }
//         if(arr[mid][0]<target && target<arr[mid][n-1]){
//             return binarysearch(arr,n,m,mid,target);
           
//         }
//         if(arr[mid][0]>target){
//             e = mid - 1;
//         }
//         if(arr[mid][0]<target){
//             s = mid + 1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return false;
// }
int main(){
    int arr[4][5] = { 1,4,7,11,15,2,5,8,12,19,3,6,9,16,22,10,13,14,17,24};
    int n = 4;
    int m = 5;
    int target = 11;

    if(binarySearch2D(arr,n,m,target)){
        cout<<"True -->"<<true<<endl;
    }else{
        cout<<"False -->"<<false<<endl;
    }
    return 0;
}