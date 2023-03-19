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
#define for(i, a, b)        for (int(i) = (a); (i) < (b); ++(i))
#define RFOR(i, a, b)       for (int(i) = (a)-1; (i) >= (b); --(i))
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
// GCD / HCF
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

// LCM
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

// Power A^B
long long int PowR(ll a , ll b){
    if( b == 0 ) return 1;

    long rec = PowR(a,b/2);
    if(b&1){
        return a * rec * rec;
    }else return rec * rec;
}

// Pow
long long int Pow(ll a , ll b){
    ll ans = 1;
    while(b){
        if(b&1){
            ans  = (ans * 1ll * a );
        }
        a *= a;
        b >>= 1;
    }
    return ans;
}
// *******************************  TEMPLATE DONE  ******************************************************
// const int N = 1e5; 
// const ll N = 1e7;
const ll N = 1e5+10;
int dp[N];


void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    vi a;
    vi b;
    for(i , 0 , n) {
        int aa;
        cin>>aa;
        a.emplace_back(aa);
    }
    for(i , 0 , n) {
        int aa;
        cin>>aa;
        b.emplace_back(aa);
    }
    sortarr(a);
    sortarr(b);
    ll count = 0;
    ll j = 0;
    ll i = 0;
    while(i < n && j < m){
        if(a[i] == b[j]){
            // cout<<"val " << a[i] <<" "<< b[j]<<endl;
            count++;
            i++;
            j++;
        }else if(a[i] - k <= b[j]  && b[j] < a[i]){
            // cout<<"a[i] - k " << a[i] - k <<" b[j]"<< b[j] << " " << a[i]<<endl;
            count++;
            i++;
            j++;
        }else if(a[i] + k >= b[j]  && b[j] > a[i]){
            // cout<<"a[i] + k " << a[i] + k <<" b[j]"<< b[j] << " " << a[i]<<endl;
            count++;
            i++;
            j++;
        }else if(a[i] > b[j]){
            j++;
        }else {
            i++;
        }
    }
    cout<<count<<endl;
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
