#include<iostream>
using namespace std;
// By using Two Pointer
string ReverseStringTwoPointer(string str,int s ,int e){
    if(s>e) return  str;
    swap(str[s],str[e]);
    return ReverseStringTwoPointer(str,s+1,e-1);
}
// By using One Pinter
string ReverseStringOnePointer(string str,int i ,int j){
    if(i>j-i) return  str;
    swap(str[i],str[j-i]);
    return ReverseStringOnePointer(str,i+1,j);
}
int main(){
    string str = "Ritesh";
    int s = 0;
    int e = str.size()-1;

    cout<<ReverseStringOnePointer(str,s,e);

    return 0;
}