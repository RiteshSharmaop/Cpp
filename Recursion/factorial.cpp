#include<iostream>
using namespace std;
long long int fact(int n){
    // base Case
    // Constraints :- n>0 
    if(n==1){
        return 1;
    }

    // recursive call


    // int smallProblem = fact(n-1);
    // int bigProblem = n * smallProblem ;


    // ans return
    

    // return bigProblem;
    // return n * smallProblem;
    return n * fact(n-1);
    
    
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return  0;
}