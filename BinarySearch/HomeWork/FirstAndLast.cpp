#include<iostream>
using namespace std;
// int first(int arr[],int target,int n){
//     int s = 0;
//     int e = n-1;
//     int f = -1;
//     int mid = s +(e-s)/2;
//     while(s<=e){
//         if(arr[mid]==target){
//             f = mid;
//             e = mid-1;
//         }else if(arr[mid]<target){
//             s = mid+1;
//         }else{
//             e = mid -1;
//         }
//         mid = s +(e-s)/2;
//     }
//     return f;
// }
// int last(int arr[],int target,int n){
//     int s = 0;
//     int e = n-1;
//     int l = -1;
//     int mid = s +(e-s)/2;
//     while(s<=e){
//         if(arr[mid]==target){
//             l = mid;
//             s = mid+1;
//         }else if(arr[mid]<target){
//             s = mid+1;
//         }else{
//             e = mid -1;
//         }
//         mid = s +(e-s)/2;
//     }
//     return l;
// }
int fl(int arr[],int target,int n){
    int s = 0;
    int e = n-1;
    int f = -1;
    int mid = s +(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            f = mid;
            e = mid-1;
        }else if(arr[mid]<target){
            s = mid+1;
        }else{
            e = mid -1;
        }
        mid = s +(e-s)/2;
    }
    cout<<f<<" ";

    s = 0;
    e = n-1;
    int l = -1;
    mid = s +(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            l = mid;
            s = mid+1;
        }else if(arr[mid]<target){
            s = mid+1;
        }else{
            e = mid -1;
        }
        mid = s +(e-s)/2;
    }
    return l;
}
int main(){
    int arr[] = {5,6,7,7,8,8,8,8,8,8,8,9,9,9,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    cout<<"n -->"<<n<<endl;
    // cout<<first(arr,target,n)<<" "<<last(arr,target,n)<<endl;
    cout<<fl(arr,target,n)<<endl;
    return 0;
}