#include<bits/stdc++.h>
using namespace std;
int gcd(int a , int b , int &x , int &y){
    if(a == 0){
        x = 0;
        y = 1;
        return b;
    }
    int x1 , y1;
    int g = gcd(b%a , a , x1 , y1);
    x = y1 - (b/a) * x1;
    y = x1;
    // cout << x1 << " "<< y1 <<endl;
    return g;
}
int main() {
    int x , y;
    int ans = gcd(4,3 , x , y);
    cout << ans <<endl;
    cout << x << " " << y << endl;
    return 0;
}