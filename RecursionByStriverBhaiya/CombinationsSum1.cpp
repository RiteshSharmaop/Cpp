#include<bits/stdc++.h>
using namespace std;
void AllSequences(int i,int arr[],int n, vector<int>& v,int target){
    if(i == n){
        if(target == 0){
            for(auto j :v) cout<< j <<" ";
            cout<<endl;
        }
        return;
    }
    
    // Sequences
    if(arr[i] <= target){
        v.push_back(arr[i]);
        // target = ;
        AllSequences(i,arr,n,v,target - arr[i]);
        v.pop_back();
    }
    AllSequences(i+1,arr,n,v,target);
}


int main(){
    int arr[] = {2,3,6,7};
    int n = 4;
    vector <int> v;
    AllSequences(0,arr,n,v,7);
    
    return  0;
}