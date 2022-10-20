#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {20,10,43,60,50};
    vector<int> :: iterator it  = v.begin();
    cout<<*(it)<<endl;
    it++;
    cout<<*(it)<<endl;
    it += 2;
    cout<<*(it)<<endl;

    vector<int> vv = {20,10,43,60,50};
    vector<int> :: iterator itt  = vv.end();
    cout<<".end() points right after last element at some where" << endl; 
    
    cout<<*(itt)<<endl;

    cout<<"to point at last element" <<endl;
    itt--;
    cout<<*(itt)<<endl;

    for(int i : v){
        cout<<i<<" ";
    }

    cout<<endl;
    // insert Function
    vector<int>vect(3,100);
    for(auto i : vect){
        cout<<i<<" ";
    }cout<<endl;
    // insert at last
    vect.push_back(15);
    for(auto i : vect){
        cout<<i<<" ";
    }cout<<endl;

    vect.insert(vect.begin() , 300);
    for(auto i : vect){
        cout<<i<<" ";
    }cout<<endl;

    vect.insert(vect.begin()+1 , 2, 10);
    for(auto i : vect){
        cout<<i<<" ";
    }cout<<endl;

    vect.clear();
    cout<<vect.empty()<<endl;
    // 1 --> true
    // 0 --> false
    return 0;
}