#include<bits/stdc++.h>

using namespace std;
bool rotationOrNot(string a,string b){
    if(a.length()!=b.length()){
        return false;
    }
    string temp = a + a;
    if(temp.find(b)==string::npos){
        return false;
    }else{
        return true;
    }
    
}

int main(){
    string a,b;
    cin>>a>>b;

    cout<<rotationOrNot(a,b);
    return 0;
}