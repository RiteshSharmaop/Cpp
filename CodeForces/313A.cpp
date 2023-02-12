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

int maxCount(vector<int>& banned, int n, int maxSum) {
        set <int> st;
        for(auto &i :banned)
            st.insert(i);
        long long count = 0,sum = 0;
        for(int i=1;i<=n;i++){
            if(st.find(i) == st.end())
                count++,sum += i;
                count--;
                break;
            }
            if(sum > maxSum){
        }
        return count;
    }

int binaryS(vector<int> arr, int s , int e , int coin){
    while(s <= e){
        int mid = s+(e-s)/2;
        if(arr[mid] == coin){
            // cout<<mid+1<<endl;
            return mid + 1;
        }
        if(arr[mid] > coin && arr[mid-1] < coin){
            // cout<<mid<<endl;
            return mid;
        }
        if(arr[mid] >= coin){
            e = mid - 1 ;
        }else s = mid +1 ;
    }
    return 0;
}


void solve(){
    // int a;
    // cin>>a;
    // if((a%100) > (a%10)){

    // }
    string s;
    cin>>s;
    if(s[0] != '-'){
        cout<<s<<endl;
        return;
    }
    if(s[s.length() - 2] > s[s.length() - 1]){
        char k = s[s.length() - 1];
        s.pop_back();
        s.pop_back();
        s.push_back(k);
    }else{
        s.pop_back();
    }
    if(s == "-0" && s[1] != 0){
        cout<<0<<endl;
    }else cout<<s<<endl;
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