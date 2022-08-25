#include<bits/stdc++.h>

using namespace std;
int StringToAnotherString(string s1, string s2){
    int s = -1;
    int j = 0;
    for(int i = 0 ; i< s2.length();i++){
        if(s2[i]==s1[j]){
            s = i;
            j++;
        }
        
    }
        cout<<"j: "<<j<<endl;
        return s;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    
    cout<<StringToAnotherString(s1,s2);
    return 0;
}