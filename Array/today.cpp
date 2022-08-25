#include<iostream>
using namespace std;
bool pali(int arr[] , int n ){
    int s = 0;
    int e = n-1;
    int countt = 0;
    while(s<=e){
        if(arr[s]==arr[e]){
            countt++;
        }
        s++;
        e--;
    }
    cout<< countt;
}
int main(){
    cout << "HII";

    return 0;
}