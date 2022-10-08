#include<bits/stdc++.h>
using namespace std;

class Human{
    // Data Members
    private:
    int age;
    int weight;
    char gender;


    public:
    int getage(){
        return this->age;
    }
};
int main() {
    
    Human a;
    // Gives An Error Because DM is Private and We Can't Access Outside the class
    cout<< a.age;

    return 0;
}