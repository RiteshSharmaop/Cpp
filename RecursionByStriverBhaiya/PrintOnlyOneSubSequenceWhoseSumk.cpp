#include<bits/stdc++.h>
using namespace std;
    bool flag = false;
void AllSequences(int i , vector<int> &v , int arr[], int n,int sum ,int summ){
    // Bc 
    if(i>=n){
        if(sum == summ && flag == false){
            flag = true;
            cout<< "[ ";
            for(auto j : v) cout<< j<<" ";
            cout<< "]";
            cout<<endl; 
        }

        return;
    }
    
    v.push_back(arr[i]);
    sum = sum+arr[i];
    AllSequences(i+1 , v , arr,n,sum ,summ);
    v.pop_back();
    sum = sum-arr[i];
    AllSequences(i+1 , v , arr,n,sum ,summ);
}
int main(){
    int arr[] = {1,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    int summ = 2;
    int sum = 0;
    AllSequences(0 , v , arr,n,sum  ,summ);
    return 0;
}