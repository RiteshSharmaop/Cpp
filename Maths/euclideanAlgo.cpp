#include<bits/stdc++.h>
using namespace std;
int gcd(int a , int b){
    if(a == 0) return b;
    return gcd(b%a , a);
}
int gcd(int a , int b){
    if(b == 0) return a;
    return gcd(b , a%b);
}
int main() {
    int ans = gcd(8 , 15);
    cout << ans << endl;
    return 0;
}