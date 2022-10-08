#include<bits/stdc++.h>
using namespace std;


// Single-Level Inheritence
class Animal{
    public:
    int age;
    string power;

    public:
    void speak(){
        cout<<"Animal Speaking"<<endl;
    }

    Animal(){
        this->power = "High";
    }
};
class Dog : public Animal{
    
};


int main() {
    Dog Labra;
    cout<<Labra.age<<endl;
    cout<<Labra.power <<endl;
    Labra.speak();
    return 0;
}