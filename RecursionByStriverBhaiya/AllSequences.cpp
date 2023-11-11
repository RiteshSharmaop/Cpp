#include<bits/stdc++.h>
using namespace std;
void AllSequences(int i,int arr[],int n, vector<int>& v){
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
    
    // Sequences
    v.push_back(arr[i]);
    AllSequences(i+1,arr,n,v);
    v.pop_back();
    AllSequences(i+1,arr,n,v);
    
    // Reverse Sequences
    // AllSequences(i+1,arr,n,v);
    // v.push_back(arr[i]);
    // AllSequences(i+1,arr,n,v);
    // v.pop_back();
}

// string seq
void StringAll(int i,string s,int n, string ans){
    if(i==n){
        cout << ans << endl;
        // for(int j = 0 ; j < v.size(); j++){
        //     cout<<v[j]<<" ";
        // }cout<<endl;
        
        return;
    }
    
    // Sequences
    ans += s[i];
    StringAll(i+1,s,n,ans);
    ans.pop_back();
    StringAll(i+1,s,n,ans);
    
}
int main(){
    int arr[] = {1,2,2};
    int n = 3;
    vector <int> v;
    AllSequences(0,arr,n,v);
    cout << endl << endl;
    string s = "abcd";
    n = 4;
    StringAll(0,s,n,"");
    
    return  0;
}