#include<iostream>
using namespace std;
void NToOne(int n,int i){
    if(i>n){
        return;
    }
    cout<<n<<" ";
    NToOne(n-1,i);
}
// void NToOne(int n,int i){
//     if(i>n){
//         return;
//     }
//     NToOne(n,i+1);
//     cout<<i<<" ";
// }
int main(){
    int n;
    cin>>n;
    int i = 1;
    NToOne(n,i);
    
    return 0;
}