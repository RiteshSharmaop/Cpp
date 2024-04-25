#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a(100,0);
    cout<<a.size() <<endl;
    a[101] = 1;
    cout<<a[101] <<endl;
    cout<<a.size() <<endl;
    return 0;
}