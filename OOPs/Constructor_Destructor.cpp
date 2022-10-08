#include<bits/stdc++.h>
using namespace std;

// Class Creation
class Human{

    // Property / Data Members
    public:
    char gender;
    int age;

    // Constructor
    Human(){
        cout<<"Constructor Call : "<<endl;
        age = 1;
        gender = 'm';
    }

    // Parameterised Constructor
    Human(int age, char gender){
        cout<<"Constructor Call Para : "<<endl;
        this->age = age;
        this->gender = gender;
    }


    Human (int age){
        cout<<"Constructor Call Para 2 : "<<endl;
        this->age = age;
    }

    // Copy constructor
    Human (Human &temp){
        this->age = temp.age;
        this->gender = temp.gender;

    }


    // Human (Human &tem){
    //     this->age = age;
    // }
    int getAge(){
        return age;
    }



    // Destructor 
    ~Human(){
        cout<<"Destructor Called : "<<endl;
    }

};
int main() {
    // Object Creation (Static)
    Human ritesh;
    cout<< ritesh.age <<endl;
    cout<< ritesh.gender <<endl;
    cout<<endl;

    // Object Creation (Dynamically)
    // pointer Alok
    Human *Alok = new Human();
    cout<<Alok->age<<endl;
    cout<<Alok->gender<<endl;
    cout<<endl;


    // Parameterised Constructor

    Human *Aditya = new Human(5 , 'M');
    cout<<"Aditya Age : "<<endl;
    cout<<Aditya->age<<endl;
    cout<<"Aditya Gender : "<<endl;
    cout<<Aditya->gender<<endl;
    cout<<endl;

    Human *Mamta = new Human(51);  
    cout<<"Mamta Age : "<<endl;
    cout<<Mamta->age<<endl;
    cout<<endl;


    // Copy Constructor
    Human Preeti(*Mamta);
    cout<<"Preeti Age : "<<endl;
    cout<<Preeti.age<<endl;
    cout<<endl;

    Human a(*Aditya);
    cout<< "A Age :: "<<endl;
    cout<<a.age<<endl;
    cout<<a.gender<<endl;
    cout<<endl;

    Human b(ritesh);
    cout<< "B Age:: "<<endl;
    cout<<b.age<<endl;
    cout<<b.gender <<endl;
    cout<<endl;
    cout<<endl; 

    delete Mamta;
    delete Aditya;
      




    cout<< endl;

    return 0;
}