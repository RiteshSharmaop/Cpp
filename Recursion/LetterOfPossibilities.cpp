#include<bits/stdc++.h>
using namespace std;

void solve(string &tiles,string &output,set<string> &result,
    map<int,bool>& flag){
        for(int i = 0 ; i<tiles.size() ; i++){
            if(flag[i] == 0){
                // char ch = tiles[i];
                output.push_back(tiles[i]);
                result.insert(output);
                flag[i] = 1;
                solve(tiles , output , result , flag);
                output.pop_back();
                flag[i] = 0;
            }
        }
    }
int numTilePossibilities(string tiles) {
    string output = "";
    set<string> result;
    map<int,bool> flag;
    solve(tiles,output,result,flag);
    return result.size();
}
int main(){
    string tiles;
    cin>>tiles;
    cout<<numTilePossibilities(tiles)<<endl;
    return 0;
}
