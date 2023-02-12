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
#define vb                  vector<bool>
#define pii                 pair<int, int>
#define ull                 unsigned long long
long double                 PI =3.14159265358979323846;
#define vvi                 vector<vector<int> >
#define vll                 vector<long long>
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


// const int N = 1e5; 
// const ll N = 1e7;
const ll N = 1e15;
// int arr[N];
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


/*
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int z = 0 ,o = 0;
    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == '0') z++;
        else o++;
    }
    if(z < o)cout<<z+1<<endl;
    else cout<<o<<endl;
}

void solve(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int> m;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        m[arr[i]]++;
    }
    int o = m[1];
    int t = m[2];
    int th = m[3];
    int f = m[4];

    ll ans =  f ;
    ll remone = 0;
    if(o <= th){
        remone = th - o;
        thj
    }
}
*/

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int st = 0;
    int e = n-1;
    while( st <= e ){
        if(s[st] == s[e]){
            cout<<(e-st)+1<<endl;;
            return;
        }
        st++;
        e--;
    }
    cout<<0<<endl;
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
        }   
    // auto sum = [](int a , int b){return a + b;} ;
    // cout<<sum(3,5);

    return 0; 

}