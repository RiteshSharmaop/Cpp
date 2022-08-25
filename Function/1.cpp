#include<iostream>
using namespace std;
int op(int arr[]){
    for(int i = 0 ; i<5 ; i++){
        if(arr[i]==9){
            return i;
        }
    }
    return -1;
}
void num(int a){ // input parameter 
    cout<<" My no is: "<< a<<endl;
    a = 6;
    cout<<a;
    return;
}
int main(){

    int a = 5;
    int arr[] = {1,4,6,5,8};
    cout<<op(arr)<<endl;  //argument

    num(a);
    cout<<a;
    return 0;
}