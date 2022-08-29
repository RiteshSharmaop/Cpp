#include<iostream>
using namespace std;
int fibonacci(int n){ 
    if(n<=1){

        return n;
    }
    int last = fibonacci(n-1);
    int slast = fibonacci(n-2);
    return last+slast;
    // return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}