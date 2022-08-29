#include<iostream>
using namespace std;
void SayNo(int n,string arr[]){
    if(n==0){
        return;
    }
    
    int last = n % 10;
    n = n / 10;


    
    SayNo(n,arr);
    cout<<arr[last]<<" ";
}
int main(){
    int n;
    cin>>n;
    string arr[] = {"zero","one","two","three","four","five","six","seven","eight","Nine"};
    SayNo(n,arr);
    return 0;
}