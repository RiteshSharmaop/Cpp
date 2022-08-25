#include<bits/stdc++.h>

using namespace std;
// char flip(char start){
//     if(start=='0'){
//         return '1';
//     }else{
//         return '0';
//     }
// }
int getFlips(string str,char start){
    int n = str.length();
    int count = 0;
    for(int i = 0 ; i< n ; i++){
        if(start != str[i]){
            count++;
        }
        // start = flip(start);

        // or
        if(start=='0'){
            start = '1';
        }else{  
            start = '0';
        }
    }
    return count;
}


int main(){
    string str;
    cin>>str;

    int ans1 = getFlips(str,'0');
    int ans2 = getFlips(str,'1');

    int mini = min(ans1,ans2);
    cout<<mini;

    return 0;
}