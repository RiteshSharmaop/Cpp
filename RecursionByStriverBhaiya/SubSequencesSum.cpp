#include<bits/stdc++.h>
using namespace std;
void Summ(int i , int arr[] , int n , int sum , vector<int>& v,int k){
    if(i==n){
        if(sum == k){
            for(auto j:v){
                cout<<j<<" ";
            }cout<<endl;
        }
        return;
    }
    sum += arr[i];
    v.push_back(arr[i]);
    Summ(i+1,arr,n,sum,v,k);
    sum -= arr[i]; 
    v.pop_back();
    Summ(i+1,arr,n,sum,v,k);


}
int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 0;
    vector<int> v;
    Summ(0,arr,n,sum,v,2);
    return 0;
}