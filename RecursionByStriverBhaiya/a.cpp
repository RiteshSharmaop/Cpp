#include<bits/stdc++.h>
using namespace std;
void solve(){
    char a;
    cin>>a;
    if(a == 'c' || a =='o' || a == 'd' || a == 'e' || a == 'f' ||a == 'r'||a =='s' ){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
}
int main() { 
    int testCase;
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
