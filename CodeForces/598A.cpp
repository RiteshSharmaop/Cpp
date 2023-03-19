// Jai Ganesh Ji
// Jai Mata Dii
#include<bits/stdc++.h>
using namespace std;

void Lets_Gooo() {
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



#define RITESH              ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll                  long long int
// #define mp                  make_pair
#define nt                  _int128
#define ld                  long double
#define vi                  vector<int>
#define vll                 vector< long long int>
#define vb                  vector<bool>
#define pii                 pair<int, int>
#define pll                 pair<long long int, long long int>
#define ull                 unsigned long long
long double                 PI =3.14159265358979323846;
#define vvi                 vector<vector<int> >
// #define vll                 vector<long long>
#define pb                  push_back
#define eb                  emplace_back
// #define l                   long long 
#define MOD                 1000000007 // 998244353
#define vi                  vector<int>
#define mp(a, b)            make_pair(a, b)
#define vpii                vector<pair<int, int> >
// #define mk(arr, n, type)    type *arr = new type[n];
#define For(i, a, b)        for (int(i) = (a); (i) < (b); ++(i))
#define rfor(i, a, b)       for (int(i) = (a)-1; (i) >= (b); --(i))
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

//..........................................................................

// ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}


long long int PowR(ll a , ll b){if( b == 0 ) return 1;long rec = PowR(a,b/2);if(b&1){    return a * rec * rec;}else return rec * rec;}

const ll mod = 1e9 + 7;

ll Pow(ll a , ll b){ll ans = 1;while(b){if(b&1){ans  = (ans * 1ll * a );}a *= a;b >>= 1;}return ans;}

ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
 
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
 
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
 
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}

ll lcm(ll a, ll b){return (a / gcd(a, b)) * b;}

ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

ll maxx(ll a , ll b) {if(a > b) return a;else return b;}
 
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}

//****************************Template Ends*******************************//

// const int N = 1e5; 
// const ll N = 1e7;
const ll N = 1e5+10;
int dp[N];
void SOLVE(){
    ll m,n,t,d,ans,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=n*(n+1)/2;
        //cout<<ans<<endl;
        a=1;
        while(a<=n)
        {
            ans-=2*a;
            a=a*2;
        }
        cout<<ans<<endl;
    }
}
void solve() {
    ll n;
    cin>>n;
    vector<int> p2 = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};
    ll sum = (n*(n+1))/2;
    ll tot = 0;
    for(auto i : p2){
        if(i <= n){
            tot += i;
        }else break;
    }
    cout<<sum-tot*2<<endl;
}

int main() {
    Lets_Gooo();
    RITESH;      
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
