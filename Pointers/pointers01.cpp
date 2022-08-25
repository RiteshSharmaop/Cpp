#include<iostream>
using namespace std;
int main(){
    
    int a;
    a = 5;
    // cout<<&a<<endl;
    int *p = &a;
    // cout<<*p<<endl;
    cout<<sizeof(p)<<endl;
    // int *k = 0;
    // cout<<*k;

    return 0;
}