#include<bits/stdc++.h>
using namespace std;

class School{
    public:
    int classrooms;

    public:
    void Assembly(){
        cout<<"School Assembly"<<endl;
    }
};
class Std1 : public School{

};
class Std2 : public School{
    public:
    int classrooms = 16;
};


int main() {
    Std1 ritesh;
    ritesh.Assembly();

    Std2 alok;
    cout<<alok.School :: classrooms<<endl;
    // inheritance Ambiguity
    cout<<alok.classrooms<<endl;
    return 0;
}