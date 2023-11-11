#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    virtual void show() {
        cout << "Hello Base" << endl;
    }
    void print(){
        cout << "Base" << endl;
    }

};
class Derived : public Base {
    public:
    void show() {
        cout << "Hello Everyone" << endl;
    }
    void print() {
        cout << "Derived" << endl;
    }
};
int main() {
    // Base A;
    Derived B;
    Base *A = &B;
    A->print();
    B.show();
    B.print();


    return 0;
}