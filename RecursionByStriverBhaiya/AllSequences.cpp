#include<bits/stdc++.h>
using namespace std;
void AllSequences(int i,int arr[],int n, vector<int> v){
    if(i==n){
        for(auto j : v){
            cout<<j<<" ";
        }
        // for(int j = 0 ; j < v.size(); j++){
        //     cout<<v[j]<<" ";
        // }cout<<endl;
        if(v.size()==0){
            cout<<"{}"<<" ";
        }
        cout<<endl;
        return;
    }
    v.push_back(arr[i]);
    AllSequences(i+1,arr,n,v);
    v.pop_back();
    AllSequences(i+1,arr,n,v);

}

int main(){
    int arr[] = {3,1,2};
    int n = 3;
    vector <int> v;
    AllSequences(0,arr,n,v);
    return  0;
}