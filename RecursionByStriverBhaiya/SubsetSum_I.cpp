#include<bits/stdc++.h>
using namespace std;
void AllSequences(int i,int arr[],int n , int sum , vector<int>&ans){
    // T.C --> O(2^N)
    // S.C --> O(N)
    if(i==n){
        ans.push_back(sum);
        return;
    }
    
    // Sequences
    // sum += arr[i]; 
    AllSequences(i+1,arr,n,sum + arr[i],ans);
    // sum -= arr[i];
    AllSequences(i+1,arr,n,sum,ans);
    

}

int main(){
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> ans;
    int sum = 0;
    AllSequences(0,arr,n,sum,ans);
    sort(ans.begin() , ans.end());


    // print  O(k) --> k == total sequense
    for(auto i : ans)cout<<i<<" ";
    cout<<endl;
    return  0;
}