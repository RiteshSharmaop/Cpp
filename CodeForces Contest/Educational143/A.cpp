// Jai Ganesh Ji
// Jai Mata Dii
// Header Files

#include<iostream>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<utility>
#include<set>
#include<unordered_set>
#include<list>
#include<iterator>
#include<deque>
#include<queue>
#include<stack>
#include<set>
#include<bitset>
#include<random>
#include<map>
#include<unordered_map>
#include<stdio.h>
#include<complex>
#include<math.h>
#include<cstring>
#include<chrono>
#include<string>
// #include "ext/pb_ds/assoc_container.hpp"
// #include "ext/pb_ds/tree_policy.hpp"
// Header Files End
 
using namespace std;
// using namespace __gnu_pbds;
// template<class T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;
// template<typename T> 
// using ordered_multiset = tree<T, null_type,less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;
 
// template<class key, class value, class cmp = std::less<key>>
// using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;
 

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
 


#define ll                  long long int
// #define mp                  make_pair
#define nt                  _int128
// #define sz(a)               a.length()   
#define ld                  long double
#define vi                  vector<int>
#define vll                 vector< long long int>
#define vb                  vector<bool>
#define pii                 pair<int, int>
#define ull                 unsigned long long
long double                 PI =3.14159265358979323846;
#define vvi                 vector<vector<int> >
// #define vll                 vector<long long>
#define pb                  push_back
#define eb                  emplace_back
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define l                   long long 
#define MOD                 1000000007 // 998244353
#define vi                  vector<int>
#define mp(a, b)            make_pair(a, b)
#define vpii                vector<pair<int, int> >
// #define mk(arr, n, type)    type *arr = new type[n];
// #define FOR(i, a, b)        for (int(i) = (a); (i) < (b); ++(i))
// #define RFOR(i, a, b)       for (int(i) = (a)-1; (i) >= (b); --(i))
#define FORALL(i, a)        for (auto& (i) : (a))
#define printall(a)         for (auto& (i) : (a)) cout << i << ' '
#define print(a)            cout << a << '\n'
#define sortarr(a)          sort((a).begin(), (a).end())
#define rsort(a)            sort((a).rbegin(), (a).rend())
#define w(x)                int x; cin >> x; while(x--)
#define all(c)              (c).begin(), (c).end()
#define sz(c)               (int)(c).size()
#define pqmx                priority_queue<int>
#define pqmn                priority_queue<int, vector<int>, greater<int> >
#define max3(a, b, c)       max((a), max((b), (c)))
#define min3(a, b, c)       min((a), min((b), (c)))
#define mx_all(c)           *max_element((c).begin(), (c).end())
#define mn_all(c)           *min_element((c).begin(), (c).end())
#define lwr_b(c, a)         lower_bound((c).begin(), (c).end(), (a)) - ((c).begin())
#define upr_b(c, a)         upper_bound((c).begin(), (c).end(), (a)) - ((c).begin())
#define llmax               9223372036854775807
ll maxx(ll a , ll b) {
    if(a > b) return a;
    else return b;
}


const ll mod = 1e9 + 7;
 
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
 
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
 
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
 
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
 
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
 
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
//****************************Template Ends*******************************//
 
//..........................................................................
// long long gcd(long long int a, long long int b)
// {
//   if (b == 0)
//     return a;
//   return gcd(b, a % b);
// }
// long long lcm(int a, int b)
// {
//     return (a / gcd(a, b)) * b;
// }

// *******************************  TEMPLATE DONE  ******************************************************
// const int N = 1e5; 
// const ll N = 1e7;
const ll N = 1e15;
// int arr[N];


void solve(){
    int n ,m;
    cin>>n>>m;
    string s1 , s2;
    cin>>s1>>s2;


    bool flag1 = false , flag2 = false;
    for(int i = 0 ; i < n-1 ; i++){
        if(s1[i] == s1[i + 1]){
            flag1 = true;
        }
    }
    for(int i = 0 ; i < m-1 ; i++){
        if(s2[i] == s2[i + 1]){
            flag2 = true;
        }
    }
    if(flag1 || flag2){
        if(flag1 && flag2){
            // cout<<s1<< " "<<s2<<endl;
            cout<<"NO"<<endl;
            return;
        }
        if(flag1){
            int mm = m-1 , nn = n-1;
            while(s1[nn-1] != s1[nn] && nn >= 0 ){
                if(s1[nn] == s2[mm]){
                    break;
                }else {
                    char a = s1[nn];
                    s1.pop_back();
                    s2.push_back(a);
                    nn--;mm++;
                }
            }
            char a = s1[nn];
            s1.pop_back();
            s2.push_back(a);
            for(int i = 0 ; i < s1.length() ; i++){
                if(s1[i] == s1[i+1]){
                    // cout<<s1<< " "<<s2<<endl;
                    cout<<"NO"<<endl;
                    return;
                }
            }
            for(int i = 0 ; i < s2.length() ; i++){
                if(s2[i] == s2[i+1]){
                    // cout<<s1<< " "<<s2<<endl;
                    cout<<"NO"<<endl;
                    return;
                }
            }
            // cout<<s1<< " "<<s2<<endl;
            cout<<"YES"<<endl;
            return;
        }


        if(flag2){
            int mm = m-1 , nn = n-1;
            while(s2[mm-1] != s2[mm] && mm >= 0 ){
                // cout<<nn+1<<" "<<mm+1<<endl;
                if(s1[nn] == s2[mm]){
                    break;
                }else {
                    char a = s2[mm];
                    s2.pop_back();
                    s1.push_back(a);
                    mm--;nn++;
                }
                // nn--;
                // mm--;
            }
            char a = s2[mm];
            s2.pop_back();
            s1.push_back(a);
            for(int i = 0 ; i < s1.length() ; i++){
                if(s1[i] == s1[i+1]){
                    // cout<<s1<< " "<<s2<<endl;
                    cout<<"NO"<<endl;
                    return;
                }
            }
            for(int i = 0 ; i < s2.length() ; i++){
                if(s2[i] == s2[i+1]){
                    // cout<<s1<< " "<<s2<<endl;
                    cout<<"NO"<<endl;
                    return;
                }
            }
            // cout<<s1<< " "<<s2<<endl;
            cout<<"YES"<<endl;
            return;
        }
    }else{
        // cout<<s1<< " "<<s2<<endl;
        cout<<"YES"<<endl;
    } 
    
}
int main() {
    init_code();
    FIO;    
    long long testCase;
    cin>>testCase;
    while(testCase--){
    //     // if (solve())cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;
        solve();
        // cout<<abs(-6);
        }   
    // auto sum = [](int a , int b){return a + b;} ;
    // cout<<sum(3,5);

    return 0; 

}



// 456
