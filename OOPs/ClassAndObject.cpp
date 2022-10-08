#include<bits/stdc++.h>
using namespace std;

// Class Creation
class Human{

    // in private we canone use property within the Class
    // Property / Data Members
    // private:  //Default
    public:
    char gender;
    int age;


    int getAge(){
        return age;
    }

};
int main() {
    // Object Creation (Static)
    Human ritesh;
    // Access
    // in private we cannot use the thr property in maain
    int ag;
    cin>>ag;
    ritesh.age = ag; 
    cout<< ritesh.age <<endl;


    // Object Creation (Dynamically)
    // Pointer k which point human object in heap space
    Human *alok = new Human();
    // Access
    alok->age = 15;
    cout<<alok->age<<endl;


    return 0;
}