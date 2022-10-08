#include<bits/stdc++.h>
using namespace std;

// Class Creation
class Human{

    // in private we canone use property within the Class
    // Property / Data Members
    private:  //Default
    char gender;
    int age;


    int getAge(){
        return age;
    }
    void setAge(int a){
        age = a;
    }
    char getGender(){
        return gender;
    }
    void setage(char b){
        gender = b;
    }

};
int main() {
    // Object Creation
    Human obj;
    
    return 0;
}