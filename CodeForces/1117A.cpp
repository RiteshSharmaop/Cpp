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

#define l                 long long 
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
#define sortarr(a)          sort((a).rbegin(), (a).rend())
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



const int N = 1e5;
// int arr[N];
//..........................................................................

void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }    
    sort(arr.begin(),arr.end());
    ll a = m/ (k+1);
    ll w = (k*arr[n-1])+arr[n-2];
    ll c = m%(k+1);
    c *= arr[n-1];
    cout<<(a*w) + c<<endl; 
}



int main() {
    init_code();
    FIO;
    // long long testCase;
    // cin>>testCase;
    // while(testCase--){
        solve();
    // }

    return 0; 
}


/*

int n;
    cin>>n;
    string s;
    cin>>s;
    int mini = INT_MAX;
    if(n==2){
        cout<<1<<endl;
        return;
    }
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '1'){
            int countZero = 0;
            for(int j = i+1 ; j < n ; j++){
                if(s[j] == '0'){
                    countZero++;
                }
                else {
                    if((countZero & 1) == 0){
                        int ans = 1;
                        cout<<1<<endl;
                        return;
                    }
                }
            }
        }
    }
    cout<<2<<endl;
*/