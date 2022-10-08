#include<bits/stdc++.h>
using namespace std;
int OptimalGameStrategy(vector<int> v , int i , int j){
    // BAse CAse
    if(i>j) return 0;

    int choice1 = v[i] + min(OptimalGameStrategy(v,i+2,j),OptimalGameStrategy(v,i+1,j-1));
    int choice2 = v[j] + min(OptimalGameStrategy(v,i+1,j-1),OptimalGameStrategy(v,i,j-2));
    return max(choice1,choice2);
}

int main(){
    vector<int> v = {20,30,2,2,2,10};
    int i = 0 ; 
    int n = v.size() - 1;

    cout<<OptimalGameStrategy(v,i,n);
    return 0;
}