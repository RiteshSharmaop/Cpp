#include<bits/stdc++.h>
using namespace std;
void solve(int i ,vector<int> &arr , vector<int> &result){
    cout<<"i : "<<i<<endl;
    if(i==arr.size()-1){
        cout<<"pushbak : "<<arr[i]<<endl;
        result.push_back(arr[i]);
        for(auto j : result) cout<< j <<" ";
        cout<<endl;
        result.pop_back();
        
        return;
    }

    result.push_back(arr[i]);
    solve(i+1 ,arr , result);
    result.pop_back();
    solve(i+1 ,arr , result);


}
int main(){
    vector<int> arr = {1,2,3};

    vector<int> result;
    // solve(0,arr,result);
    solve(0,arr,result);
    return  0;
}