#include<bits/stdc++.h>
using namespace std;

class Math{
    public:
    int age( int a , int b){
        return a+b;
    }

    // Function/ Method Overloading
    // overloading No of Parameter
    // Add Extra PArameter or remove one Parameter
    int age(int a , int b , int c){
        return a+b+c;
    }

    // overloading type of Parameter 
    // Change datatype of Parameter
    int age(int a , float b){
        return a-b;
    }
};

int main() {
    
    Math a;
    int aa = a.age(5,6);
    cout << aa;

    return 0;
}