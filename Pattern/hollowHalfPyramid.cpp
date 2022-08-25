#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i = 1 ; i<=n; i++){
        if (i==1 || i==2 || i==n){
            for(int j = 1 ; j<=i;j++){
                cout << j << " " ;
            }
        }
        cout << endl;
    }
    return 0;
}