#include<bits/stdc++.h>

using namespace std;
void sort(string str){
    sort(str.begin(),str.end());
    cout<<str;
}
bool checkAnagramOn(string str1,string str2){
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

 
    for(int i =0  ; i<7; i++){
        if(str1[i]!=str2[i])
        return false;
    }

    return true;
}
int checkAnagram(string str1,string str2){
    int freq[26] = {0};
    // Increament in string 1
    for(int i = 0 ; i < str1.length();i++){
        // char ch = str1[i];
        int index = str1[i]/*ch*/-'a';
        freq[index]++;
    }
    // decreament in string 2
    for(int i = 0; i <str2.length() ; i++){
        // char ch = str2[i];
        int index = str2[i]/*ch*/-'a';
        freq[index]--;
    }
    for(int i = 0 ; i<26 ; i++){
        if(freq[i]>=1){
            return -1/*false*/;
        }
    }
    return 0/*true*/;
}
int main(){
    string str,str1,str2;
    // cin>>str;
    // getline(cin,str);

    // cout<<str<<endl;
    // cout<<str[0]<<endl;
    // sort(str);

    cin>>str1>>str2;
    
    
    // if(checkAnagramOn(str1,str2)||checkAnagram(str1,str2)){
    //     cout<<"T";
    // }else{
    //     cout<<"F";
    // }

    if(checkAnagram(str1,str2)==0){
        cout<<"Anagram"<<endl;
    }else{
        cout<<"Not- Anageam"<<endl;
    }
    

    return 0;
}