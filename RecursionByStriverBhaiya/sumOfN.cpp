#include<iostream>
using namespace std;
// Parameterised
int Sum(int n,int sum){
    if(n == 0){
        return sum;
    }
    // sum = sum + n;
    Sum(n-1,sum+n);
}


// Functional
int Summ(int n){
    if(n == 0 ){
        return n;
    }
    // int sm = n + Summ(n-1);
    // return sm;
    return n + Summ(n-1);
}
 
int main(){
    int n;
     int sum = 0;
    cin>>n; 
    cout<<"Parameterised : "<<endl;
    cout<<Sum(n,sum)<<endl;;
    cout<<"Functional : "<<endl;
    cout<<Summ(n);
    return 0;
}