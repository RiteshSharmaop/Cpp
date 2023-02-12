#include<bits/stdc++.h>
using namespace std;
void AllSequences(int i,int arr[],int n, vector<int>& v, int total){
    if(i>=n){
        cout<<total<<endl;
        return;
    }
    if(arr[i+1] > arr[i+2]){
        cout<<"a : "<<arr[i]<<endl;
        AllSequences(i+2 ,arr,n,v,total +arr[i] );
    }else {
        cout<<"a : "<<arr[i]<<endl;
        AllSequences(i+1 ,arr,n,v,total + arr[i] );
    }
}

int main(){
    int arr[] = {6,10,5,15,20,7,16};
    int n = 7;
    vector <int> v;
    AllSequences(0,arr,n,v,0);
    
    return  0;
}