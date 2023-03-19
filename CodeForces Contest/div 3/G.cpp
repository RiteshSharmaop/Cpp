// Jai Ganesh Ji
// Jai Mata Dii
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



#define ll                  long long int
// #define mp                  make_pair
#define nt                  _int128
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
    int n;
    cin>>n;
    vi arr(n-1);
    for(int i = 0 ; i < n-1 ; i++){
        cin>>arr[i];
    }
    sortarr(arr);
    for(int i = 0 ; i < n-1 ; i++){
        if(i+1 != arr[i]){
            print(i+1);
            return;
        }
    }

}
int main() {
    init_code();
    FIO;    
    // long long testCase;
    // cin>>testCase;
    // while(testCase--){
    //     // if (solve())cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;
        solve();
        // cout<<abs(-6);
        // }   
    // auto sum = [](int a , int b){return a + b;} ;
    // cout<<sum(3,5);

    return 0; 

}



// 456
