#include<bits/stdc++.h>
using namespace std;
int main() {
    deque<int>d;
    d.push_back(5);
    for(auto i : d) cout<< i<<" ";
    cout<<endl;
    d.emplace_back(6);
    d.push_front(1);
    d.emplace_front(2);
    for(auto i : d) cout<< i<<" ";
    cout<<endl;

    cout<<d.back()-1<<endl;
    cout<<d.front();
    for(auto i : d) cout<< i<<" ";
    cout<<endl;
    cout<<d.empty()<<endl;
    return 0;
}