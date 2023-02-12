#include<bits/stdc++.h>
using namespace std;
void print(set<string> s){
    for(auto &i : s){
        cout<<i<<" ";
    }cout<<endl;
}
int main() {
    set<string> s;
    s.insert("abc");
    s.insert("def");
    s.insert("ghij");
    auto it = s.find("abc");
    if(it != s.end())cout<<*it<<endl;
    else cout<<"Not Available!"<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    auto itt = s.begin();
    cout<<*itt<<endl;
    // print(s);
    return 0;
}