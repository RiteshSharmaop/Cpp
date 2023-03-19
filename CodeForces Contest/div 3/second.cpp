#include<bits/stdc++.h>
using namespace std;
void init_code() {
// fast_io;
#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);
freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE 
}

int main() {
    init_code();
    long long testCase;
    cin>>testCase;
    while(testCase--){
        long long int n,m;
        cin>>n>>m;
        set<long long int> s;
        while(n--){
            long long int a;
            cin>>a;
            s.insert(a);
        }
        while(m--){
            long long int aw;
            cin>>aw;
            auto it = s.find(aw);
            if(it != s.end()) cout<<"YES\n";
            else {
                cout<<"NO\n";
                s.insert(aw);
            }
        }
        
        
    }   
    return 0; 

}
/*
1788 B
void solve(){
    int n;
    cin>>n;
    int a = 0 , flag = 0;
    int dig[10];
    while(n>0){
        dig[a++] = n % 10;
        n/=10;
    }
    vector<int> arr(10) , brr(10);
    for(int i = 0 ; i < a ; i++){
        if(dig[i]&1){
            arr[i] = (dig[i]/2)+flag;
            brr[i] = (dig[i]/2)+1-flag;
            flag = 1 - flag;
        }else {
            arr[i] = dig[i]/2;
            brr[i] = dig[i]/2;
        }
    }
    ll q = 0 , w = 0 , e = 1;
    for(int i = 0 ; i < a ; i++){
        w += brr[i]*e;
        q += arr[i]*e;
        e *= 10;
    }
    cout<<q<<" "<<w<<endl;
}
*/
/*
/*
int negative(vector<int> &nums){
        int s = 0;
        int e = nums.size()-1;
        int mid = s + (e - s) / 2;
        int neg = -1;
        while(s <= e){
            if(nums[mid] < 0){
                neg = mid + 1;
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return neg;
    }
    int positive(vector<int> &nums){
        int s = 0;
        int e = nums.size()-1;
        int mid = s + (e - s) / 2;
        int pos = -1;
        while(s <= e){
            if(nums[mid] > 0){
                pos = mid + 1;
                e = mid - 1;
            }else s = mid + 1;
            mid = s + (e - s) / 2;
        }
        return pos;
    }

void solve(){
    vector<int> nums = {-2,-2,-1};
    int pos = positive(nums);
    pos = (nums.size() - pos )+1;
        int neg = negative(nums);
        cout<<neg<< " "<< (nums.size() - pos ) +1;
        cout<<max(neg , pos)<<endl;
}
*/
/*
void solve(){
    ll n;
    cin>>n;
    if(n & 1) {
        cout<<"YES"<<endl;
        return;
    }
    for(ll i = 2 ; i*i < n ; i++){
        ll k = n % i;
        if((k == 0 && (k&1) != 0 ) ) {
            cout<<"YES"<<endl;
            return;
        }
        ll m = n / i;
        if(k == 0 && (m&1) != 0){
            cout<<"YES"<<endl;
            return;
        }
    }   
    cout<<"NO"<<endl;

}


1475
*/

/*
bool mapSort(pair<int , int > a , pair < int , int > b){
    return a.second < b.second;
}
unordered_map<int , int > sorrt(unordered_map<int , int > &mp){
    vector< pair<int , int> >A;
    for(auto& i : mp){
        A.emplace_back(i);
    }
    sort(A.begin() , A.end() , mapSort);
    for(auto& i : mp){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    return mp;
}


void solve(){
    int n,m;
    cin>>n>>m;
    unordered_map<int , int> mp;
    vector<int> a(n);
    vector<char> c(m);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(int i = 0 ; i < m ; i++){
        cin>>c[i];
    }
    sorrt(mp);

    


}
*/
/*
void solve(){
    double a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    int aa = a;
    while(aa.length > 0 && a % 10 == 0){
        a /= 10;
        b++;
    }
    while(c.length > 0 && c % 10 == 0){
        c/=10;
        d++;
    }
    b = pow(10 ,b);
    d = pow(10 ,d);
 
    if(b == 0 && d == 0){
        if(a > c){
            cout<<">"<<endl;
        }else if(a < c){
            cout<<"<"<<endl;
        }else cout<<"="<<endl;
    }else if(b == 0){
        if(a > c*d){
            cout<<">"<<endl;
        }else if(a < c*d){
            cout<<"<"<<endl;
        }else cout<<"="<<endl;
    }else if(d == 0){
        if(a*b > c){
            cout<<">"<<endl;
        }else if(a*b < c){
            cout<<"<"<<endl;
        }else cout<<"="<<endl;
    }else {
        if(a*b > c*d){
            cout<<">"<<endl;
        }else if(a*b < c*d){
            cout<<"<"<<endl;
        }else cout<<"="<<endl;
    }

}

*/

// int anss(int n , int ans , int i){
//     if(n <= 0){
//         return ans;
//     }
//     n /= 10;
//     anss(n , ans , i);
//     cout<<n<<" ";
// }
// void comparee(vector<int> &temp){
//     for(auto i: temp){
//         cout<<i <<" ";
//     }
//     cout<<endl;
// }
// void swapp(int a , int b , int row , int col ,vector <vector<int>> score){
//     for(int i = a ; i < b ; i++ ){
//         for(int j = 0 ; j < col ; j++){
//             swap(score[i][j] , score[j]);
//         }
//     }
// }
// vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
//     int row = score.size();
//     int col = score[0].size();
//     for(int i = 1 ; i < row ; i++){
//         if(score[i-1][k] < score[i][k]){
//             swapp(i-1 , i , row , col);
//         }
//     } 
//     return score;
// }

/*
void solve(){
    char arr[8][8];
    for(int i = 0 ; i < 8 ; i++){
        for(int j = 0 ; j < 8 ; j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ; i < 8 ; i++){
        int a = 0 ;
        char aa;
        for(int j = 0 ; j < 7 ; j++){
            if(arr[i][j] != '.' && arr[i][j] == arr[i][j+1]){
                aa = arr[i][j];
                a++;
            }
        }
        if(a == 7 ){
            cout<<aa<<endl;
            break;
        }
    }
    for(int i = 0 ; i < 8; i++){
        int a = 0;
            char aa;
        for(int j = 0 ;j < 8 ; j++){
                1Aswerty67u
            if(arr[j][i] != '.' && arr[j][i] == arr[j+1][i]){
                aa = arr[j][i];
                a++;
            }
            // cout<<arr[j][i];
            
        }
        if(a == 8){
                cout<<aa<<endl;
                break;
            }
    }
    // for(int i = 0 ; i < 8 ; i++){
    //     // pair<char , int> a;
    //     for(int j = 0 ; j < 8 ; j++){
    //         // if(arr[i][j] != '.' && arr[i][j] == arr[i][j+1]){
    //         //     a.first++;
    //         // }
    //         cout<<arr[j][i];
    //     }cout<<endl;
    // }
}

/*
*/
// void solve(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     int maxi = INT_MIN;
//     for(int i = 0 ; i < n ; i++){
//         cin>>arr[i];
//         maxi = max(maxi , arr[i]);
//     }
    
//     vector<int> first;
//     vector<int> sec;
//     int count = 0;
//     int cc = 0;
//     while(arr[n-1] != maxi ){
//         int x = arr[n-1];
//         count++;
//         int secLast = -1;
//         for(int i = 0 ; i < n ; i++){
//             if(arr[i] <= x){
//                 first.push_back(arr[i]);
//             }else {
//                 secLast = arr[i];
//                 sec.push_back(arr[i]);
//             }
//         }
//         if(secLast == maxi) break;
//         arr.clear();
//         for(auto i : first){
//             arr.emplace_back(i);
//         }
//         for(auto i : sec){
//             arr.emplace_back(i);
//         }
//         first.clear();
//         sec.clear();
//     }
    
//     cout<<count<<endl;
// }

// 
// void solve(){
// //     int n;
// //     cin>>n;
// //     int arr[n];
// //     int o = 0,t = 0 ,th = 0,f=0;
// //     for(int i = 0 ; i < n ; i++){
// //         cin>>arr[i];
// //         switch(arr[i]){
// //             case 1 :
// //                 o++;
// //                 break;
// //             case 2:
// //                 t++;
// //                 break;
// //             case 3 :
// //                 th++;
// //                 break;
// //             default:
// //                 f++;
// //             }
// //     }
// //     ll tr = 0;
// //     if((t & 1 ) == 0) t /= 2;
// //     else {
// //         tr = 1;
// //         t /= 2;
// //     }
// }


ll nn;
    cin>>nn;
    ll TPrime = 0;
    for(ll i = 0 ; i < nn ; i++ ){
        ll n;
        cin>>n;
        for(ll j = 1 ; j*j <= n ; j++){
            if(n%j == 0){
                // cout<<"i : "<<i<<endl;
                TPrime++;
            }
            if((n/j) != j){
                // cout<<"i : "<<n/i<<endl;
                TPrime++;   
            }
    }
    if(TPrime == 3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }