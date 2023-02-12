#include<bits/stdc++.h>
using namespace std;
int main() {
    map<pair<int , int> , int > m;
    map<set<int> , int > s; 
    set<int> s1 = {1,2,3};
    set<int> s2 = {1,3,3};
    cout<<(s1 < s2)<<endl;;

    vector<int> v = {1,5,3};
    vector<int> v1 = {1,7,3};
    cout<<(v < v1);
    return 0;
}