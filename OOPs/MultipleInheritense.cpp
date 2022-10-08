#include<bits/stdc++.h>
using namespace std;


// Multiple Inheritence
class Maruti{
    public:
    int price = 3200000;


    bool brand(){
        cout<<"Maruti And Suzuki"<<endl;
        return true;
    }
};

class Suzuki{
    public:
    char grade = 'A';

};

class Swift : public Maruti , public Suzuki{
    
};

int main() {
    Swift car1;
    cout<<car1.price<<endl;
    car1.brand();
    cout<<car1.grade<<endl;
    
    
    Swift* car2 = new Swift();
    cout<<car2->grade<<endl;
    return 0;
}