#include<bits/stdc++.h>
using namespace std;
void SubSequencesOfString(int i , string str , int n , vector<int>& v,string op){
    if(i>=str.length()){
        v.push_back(op);
        return;
    }
}
int main(){
    string str = "abc";
    int n = 3;
    vector<string> v;
    string op = "";
    SubSequencesOfString(0,str,n,v,op);
    return  0;
}