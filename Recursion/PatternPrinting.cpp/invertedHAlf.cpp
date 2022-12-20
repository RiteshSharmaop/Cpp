#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    if(n==0){
        // cout<<endl;
        return;
    }
    for(int i = 1 ; i <= n ; i++){
        cout<<n<<" ";
    }cout<<endl;
    pattern(n-1);
    // cout<<"* ";
}
int main() {
    pattern(5);
    return 0;
}