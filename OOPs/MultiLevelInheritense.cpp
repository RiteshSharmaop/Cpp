#include<bits/stdc++.h>
using namespace std;


// Multi-Level Inheritence
class Animal{
    public:
    int age = 10;
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

class Lebra : public Dog{
    public:
    void bread(){
        cout<<"Lebra"<<endl;
    }
};

int main() {
    Lebra Black;
    cout<<Black.age<<endl;
    cout<<Black.power <<endl;
    Black.speak();
    Black.bread();
    return 0;
}