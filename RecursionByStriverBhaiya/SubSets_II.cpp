#include<bits/stdc++.h>
using namespace std;

/*
void SubsetII(int ind,int arr[],int n, vector<int>& v ,set<vector <int>> &ans){
    if(ind==n){
        ans.insert(v);
        return;
    }
    v.push_back(arr[ind]);
    SubsetII(ind+1,arr,n,v,ans);
    v.pop_back();
    SubsetII(ind+1,arr,n,v,ans);

}
int main(){
    int arr[] = {1,2,2};
    int n = 3;
    vector <int> v;
    set<vector <int>> ans;
    SubsetII(0,arr,n,v , ans);
    vector<int> anss;
    for(auto i : ans){
        if(i.empty()) cout<<"{}";
        for(auto j: i){
            // else
            cout<<j<<" ";
        }cout<<endl;
    }
    // 
    return  0;
}

*/
void SubsetII(int ind,int arr[],int n, vector<int>& v ,vector<vector <int>> &ans){
    if(v.size() != 0){
        ans.push_back(v);
        }
    if(v.size() == 0) {
        cout<<"[]"<<endl;
    }
    if(ind==n){
        return;
    }
    for(int i = ind ; i < n ; i++){
        if(arr[i] == arr[i-1] && i > ind) continue;
        v.push_back(arr[i]);
        SubsetII(i+1,arr,n,v,ans);
        v.pop_back();
    }
}
int main(){ 
    int arr[] = {1,2,2};
    int n = 3;
    vector <int> v;
    vector<vector <int>> ans;
    SubsetII(0,arr,n,v , ans);
    for(auto i : ans){
        for(auto j:i){
            cout<<j<<" ";
        }cout<<endl;
    }
    
    return  0;
}