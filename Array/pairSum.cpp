#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void optimize(int arr[],int n,int target){
    // TimeComplexity --> O(nlogn)
    sort(arr, arr + n );
    int i = 0;
    int j = n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            cout<<"{" <<arr[i] << " , " << arr[j] <<"}"<<endl;
            i++;
        }
        if(arr[i]+arr[j]>target){
            j--;
        }
        if(arr[i]+arr[j]<target){
            i++;
            optimize(arr,n);
        }
    }
}
void bruteForce(int arr[],int n,int target){
    // TimeComplexity --> O(n^2)
    int i = 0;
    while(i<n){
        int j = i+1;
        while(j<=n){
            if(arr[i]+arr[j]==target){
                cout<<"["<< i << " , " << j << "]"<<endl;
                cout<<arr[i]<<"+"<<arr[j] <<endl;
            }
            j++;
        }
        i++;
    }
}
int main(){
    int arr[] = {4,5,6,9,3,2,9,7,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cin >> target;
    // bruteForce(arr,n,target);
    optimize(arr,n,target);
    return 0;
}