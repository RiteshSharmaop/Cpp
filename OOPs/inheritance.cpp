#include<bits/stdc++.h>
using namespace std;
// Parent Class
class Human{
    // DM
    public:
    int age;
    int weight ;
    char gender;

    public:
    int getAge(){
        return age;
    }
};
// inherit Human into Female
class Female : public Human{

};

int main() {
    Female firstFem;
    cout<<firstFem.age<<endl;
    cout<<firstFem.weight<<endl;
    return 0;
}