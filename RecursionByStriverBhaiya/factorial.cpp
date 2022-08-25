#include<iostream>
using namespace std;

// Parameterised
void Factorial(int n,int sum){
    if(n == 1){
        cout<<sum<<endl; 
        // return sum;
        return;
    }
    Factorial(n-1,sum*n);
}


// Functional
int Factorial(int n){
    if(n == 0 ){ // n == 1
        return 1;
    }
    // int sm = n * Factorial(n-1);
    // return sm;
    return n * Factorial(n-1);
}
 
int main(){
    int n;
     int sum = 1;
    cin>>n; 
    cout<<"Parameterised : "<<endl;
    Factorial(n,sum);
    cout<<"Functional : "<<endl;
    cout<<Factorial(n);
    return 0;
}