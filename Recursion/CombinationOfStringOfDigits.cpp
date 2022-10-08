#include<iostream>
using namespace std;
void CombinationInStringOfDigits(string str,int i,int n,string output){
    if(i>=n) {
        cout<<output<<endl;
        return;
    }
    // NO Space Put Character without Space
    output.push_back(str[i]);
     CombinationInStringOfDigits(str,i+1,n,output);

    // with Space Put Character with Space
    output.push_back(' ');
     if(str[i+1] != '\0') CombinationInStringOfDigits(str,i+1,n,output);

}
int main(){
    string str = "123";
    int n = str.length();
    int i = 0;
    string output = "";
    CombinationInStringOfDigits(str,i,n,output);
    return 0;
}
