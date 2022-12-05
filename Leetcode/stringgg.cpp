#include<bits/stdc++.h>
using namespace std;
int solve(vector<string> operations){
    int x = 0;
        for(int i = 0 ; i < operations.size() ; i++){
            string s = operations[i];
            if(s[0] == '+' || s[2] == '+'){
                x++;
            }else{
                x--;
            }
        }
        return x;
}
int main() {
    vector<string> operations = {"--X","X++","X++"};
    cout<<solve(operations)<<endl;
    return 0;
}
// "++X","++X","X++"