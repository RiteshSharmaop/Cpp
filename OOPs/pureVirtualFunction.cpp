#include<bits/stdc++.h>
using namespace std;

class Base{
    int a;

    public:
    virtual void show() = 0;

};
class Derived : public Base {
    public:
    void show() {
        cout << "Hello Everyone" << endl;
    }
};
int main() {
    Derived obj;

    obj.show();


    return 0;
}