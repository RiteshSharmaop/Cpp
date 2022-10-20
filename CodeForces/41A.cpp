#include<bits/stdc++.h>
using namespace std;

int main() {
    string a,s;
    cin>>a>>s;
    int count = 0;
    int i = 0;
    int j  = s.length()-1;
    while(i<=j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    if(a==s){
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
    
    return 0;
}
