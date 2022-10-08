#include<bits/stdc++.h>
using namespace std;
void f(string tiles , set<string>& result , map<int,bool>& flag , string& output){
    for(int i = 0 ; i < tiles.size();i++){
        if(flag[i] == 0){
            output.push_back(tiles[i]);
            result.insert(output);
            flag[i] = 1;
            f(tiles,result,flag,output);
            output.pop_back();
            flag[i] = 0;
        }
    }
}
int ans (string tiles){
    string output = "";
    set<string> result;
    map<int,bool> flag;
    f(tiles,result,flag,output);
    return result.size();
}
int main(){
    string tiles;
    cin>>tiles;
    cout<<ans(tiles)<<endl;
    return 0;
}