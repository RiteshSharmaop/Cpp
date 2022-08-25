#include<iostream>
using namespace std;
int Palindrom(int arr[],int n){
    int s = 0;
    int e = n-1;
    int count = 0;
    
    while(s<=e){
        if(arr[s]==arr[e]){
            count++;
        }
        s++;
        e--;
    }

    if(n%2==0){
        if(n/2 == count){
            cout<<"YES";
        }else {
            cout<<"NO";
        }
    }else{
        n++;
        if(n/2 == count){
            cout<<"YES";
        }else {
            cout<<"NO";
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }

    cout<<"Palindrom or Not: "<<endl;
    Palindrom(arr,n);
    

    return 0;
}