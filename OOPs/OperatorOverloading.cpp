#include<bits/stdc++.h>
using namespace std;

class Demo{
    public:
    int first;
    int second;
    
    void operator- (Demo& temp){
        cout<<"Or Bhaiya Kya Hall Hai"<<endl;
    }
    void operator>> (Demo& temp){
        cout<<"Aree Wapas :}"<<endl;
    }

    // void operator- (Demo& temp){
    //     cout<<"Or Bhaiya Kya Hall Hai"<<endl;
    // }
};

int main() {
    Demo a,b;
    a-b;
    a>>b;
    
   
    return 0;
}