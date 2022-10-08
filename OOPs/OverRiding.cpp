#include<bits/stdc++.h>
using namespace std;

class Animal{

    public:
    void speak(){
        cout<<"Animal is Speaking"<<endl;
    }

};

class Dog : public Animal{
    public:
    // Overriding
    void speak(){
        cout<<"Dog is Barking"<<endl;
    }
};

int main() {
    Dog Lebra;
    Lebra.speak();

    // if we want Animal speak
    Lebra.Animal :: speak();
    return 0;
}