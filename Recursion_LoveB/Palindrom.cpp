#include<iostream>
using namespace std;
// By using Two Pointer
bool PalindromStringTwoPointer(string str,int s ,int e){
    if(s>e) return  true;
    if(str[s]!=str[e]) return false;
    return PalindromStringTwoPointer(str,s+1,e-1);
}
// By using One Pinter
bool PalindromStringOnePointer(string str,int i ,int j){
    if(i>j-i)  return  true;
    if(str[i]!=str[j-i]) return false;
    return PalindromStringOnePointer(str,i+1,j);
}
int main(){
    string str = "babbar";
    int s = 0;
    int e = str.size()-1;

    if(PalindromStringOnePointer(str,s,e)) cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}