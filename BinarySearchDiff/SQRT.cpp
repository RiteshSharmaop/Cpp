#include<bits/stdc++.h>
using namespace std;
int sqrt(int num){
    int s = 0 , e = num;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(mid*mid == num){
            return mid;
        }
        if(mid*mid > num){
            e = mid - 1;
        }else{ 
            s = mid+1;
            ans = mid;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    
    int num;
    cin>>num;
    cout<<sqrt(num);
    return 0;
}