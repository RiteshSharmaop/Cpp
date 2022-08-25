#include<iostream>
using namespace std;
bool ok(int arr[],int n){
    // int n = arr.size();
    // int n = 4;
    for(int i  = 0 ; i< n  ; i++){
        for(int j = 0 ; j < n ; j++){
            if(arr[i]*2==arr[j]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[] = {3,1,6,11};
    if(ok(arr,4)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }

    return 0;
}