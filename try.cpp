
#include<bits/stdc++.h>
using namespace std;
bool solve(long long int four , int n){
    if(four== n || n == 1) return true;
    if(four > n ) return false;
        return solve(four*3 , n);
    }   
bool isPowerOfThree(int n) {
        long long int four = 3; 
        bool ans = solve(four , n);
        return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<isPowerOfThree(n)<<endl;
}