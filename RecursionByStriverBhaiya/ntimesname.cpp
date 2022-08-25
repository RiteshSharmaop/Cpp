#include<iostream>
using namespace std;
void names(string name,int i){
    if(i>5){
        return;
    }
    cout<<name<<endl;

    names(name,i+1);
}
// void names(string name,int n){
//     if(n==0){
//         return;
//     }
//     cout<<name<<endl;
    
//     names(name,n-1);
// }
int main(){
    string name;
    cin>>name;
    int i = 1;
    int n = 5;
    names(name,i);
    // names(name,n);
    return 0;
}