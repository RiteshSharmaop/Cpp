#include<bits/stdc++.h>
using namespace std; 
int binarySearch(int arr[][3],int target,int n,int row){
    int s = 0;
    int e = n-1;
    int mid= s+(e-s)/2;
    while(s<=e){
        if(arr[row][mid]==target){
            cout<<"{ "<<row<<" "<<mid<<" }"<<endl;
            return true;
        }else if(arr[row][mid]>target ){
            e = mid - 1;
        }else{
            s= mid+1;
        }
        mid = s+(e-s)/2;
        }
        return false;
    }


bool LastOc(int arr[][3],int target,int n,int m){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid][0]==target){
            cout<<mid<<" "<<0<<endl;;
            return true;
        }
        if(arr[mid][m-1]==target){
            cout<<mid<<" "<<m-1<<endl;;
            return true;
        }

        if(target<arr[mid][m-1] && target>arr[mid][0]){
            int ans  = binarySearch(arr,target,n,mid);  
            return ans;          
        }
          
        if(target<arr[mid][0]){
            e= mid-1;
        }
        if(target>arr[mid][0]){
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return false;

}
int main(){
    int arr[3][3] = {1,5,9,14,20,23,30,34,43};
    int target;
    cin>>target;
    int n = 3;
    int m = 3;
    cout<<LastOc(arr,target,n,m);
    
}
