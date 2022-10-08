#include<bits/stdc++.h>
using namespace std;
int solve(int l , int r){
    int maxi =  max(l,r);
    int mini = min(l,r);

    if(maxi%mini ==0){
        return maxi;
    }
    int i = 2;
    while(maxi % mini != 0){
        maxi *= i;
        if(maxi % mini == 0){
            return maxi;
        }
        i++;
    }
    return -1

}
void solvee(int l , int r){
    int s = l;
    int e = r;
    while(s<=e){
         for(int i = 1 ; i < r ; i++){

        }
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){;
        int l , r;
        cin>>l>>r;
        
        
    }
    return 0;
}