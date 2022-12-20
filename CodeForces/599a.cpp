#include<bits/stdc++.h>
using namespace std;

void init_code() {
// fast_io;
#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE 
}

/* ascii value
A=65,Z=90,a=97,z=122
*/
 
// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph


#define ll long long
#define pb emplace_back
#define mp make_pair
#define nt _int128
#define ld long double
long double PI =3.14159265358979323846;
const int N = 1e5;

void solve(){
    int d1,d2,d3;
    cin>>d1>>d2>>d3;
    int a = 0 ,  b = 0 , c = 0 , d = 0;
    a  = (d1 * 2) + (d2*2);
    b  =  (d1 * 2 ) + (d3 *2);
    c = ( d2 * 2) + (d3 *2);
    d = d1 + d2 + d3;
    cout<<min(a,min(b,min(c,d))); 
}

int main() {
    init_code();
    // long long testCase;
    // cin>>testCase;
    // while(testCase--){
    //     solve();
    // }
    solve();
    return 0; 
}
