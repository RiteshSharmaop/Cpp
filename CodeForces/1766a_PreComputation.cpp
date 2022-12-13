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
vector<int> v;

void cal(){
    for(int i = 1 ; i <= 100000 ; i*=10){
        for(int j = 1 ; j <= 9 ; j++){
            v.pb(i*j);
        }
    }
    // for(auto x:v)cout<<x<<" ";
}
int solve(){
    ll n;
    cin>>n;
    int ans = 0;
    for(auto i : v){
        if(i <= n)ans++;
    }
    return ans;
}
int main() {
    init_code();
    long long testCase;
    cin>>testCase;
    cal();
    while(testCase--){
        cout<<solve()<<endl;
    }
    return 0; 
}