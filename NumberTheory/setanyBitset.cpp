#include<bits/stdc++.h>
using namespace std;
void printBinary(int n){
    int i = 32;
    while(i--){
        cout<<((n >> i) & 1);
    }
}
int main() {
    int n = 5;
    int i = 1;
    int mask = 1<<i;
    n = n | mask;
    cout<<n<<endl;;
    printBinary(n);
    return 0;
}