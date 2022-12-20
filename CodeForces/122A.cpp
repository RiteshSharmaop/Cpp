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
#define mp                  make_pair
#define nt                  _int128
#define ld                  long double
#define vi                  vector<int>
#define vb                  vector<bool>
#define pii                 pair<int, int>
#define ull                 unsigned long long
long double PI =3.14159265358979323846;
#define vvi                 vector<vector<int> >
#define vll                 vector<long long>
#define pb                  push_back
#define eb                  emplace_back
/*
#define int                 long long
#define PI                  3.1415926535897932384626
#define MOD                 1000000007 // 998244353
#define vi                  vector<int>
#define mp(a, b)            make_pair(a, b)
#define vpii                vector<pair<int, int> >
#define mk(arr, n, type)    type *arr = new type[n];
#define FOR(i, a, b)        for (int(i) = (a); (i) < (b); ++(i))
#define RFOR(i, a, b)       for (int(i) = (a)-1; (i) >= (b); --(i))
#define FORALL(i, a)        for (auto& (i) : (a))
#define printall(a)         for (auto& (i) : (a)) cout << i << ' '
#define print(a)            cout << a << '\n'
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
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

*/

const int N = 1e5;
bool solve(){
    ll n;
    cin>>n;
    ll nn = n;
    if(n%4 == 0 || n % 7 == 0){
        return true;
    }else{
        while(n != 0){
            int f = n%10;
            if(f != 4 && f != 7){
                vector<int> v = {4,7,44,47,74,77,444,447,477,744,774,777};
                for(auto i : v){
                    if(nn%i == 0){
                        return true;
                    }
                }
                return false;
            }
            n /= 10;
        }
        return true;
    }
}
int main() {
    init_code();
    // long long testCase;
    // cin>>testCase;
    // while(testCase--){
    //     solve();
    // }
    
    if(solve()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0; 
}
