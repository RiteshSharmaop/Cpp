#include<iostream>
using namespace std;
double sqrt(int n){
    double s = 0;
    double e = n;
    double mid = s+(e-s)/2;
    double ans = -1;
    while(s<=e){
        double sq = mid*mid;
        if(sq==n){
            return mid;
        }
        if(sq<n){
            ans = mid;
            s = mid+1;
        }else{
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    
    return ans;
}
int main(){
    double n ;
    cin>>n;
    cout<<sqrt(n);
    return 0;
}