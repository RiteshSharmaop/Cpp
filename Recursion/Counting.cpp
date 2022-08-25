#include<iostream>
using namespace std;
void Counting(int n){
    if(n<1){
        return ;
    }
    // Recurance Relation
    Counting(n-1);
    
    // Processing
    cout<<n<<" ";
    
}
// void count(int n){
//     int s = 1;
//     if(s<=n){
//         return;
//     }
//     cout<<s<<" ";
    
//     count(n+1);
// }
void count(int i , int n){
    if(i>n){
        return ;
    }
    cout<<i<<" ";
    count(i+1,n);
}
int main(){
    int i = 1;
    // Counting(5);
    count(i,5);
    return  0;
}