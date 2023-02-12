#include<bits/stdc++.h>
using namespace std;
/*
class Solution {
public:
    void solve(int currOpen , int currClose , int remOp , 
        int remClo , string &output,vector<string> &result){
        // Base Case
        if(remOp == 0 && remClo == 0){
            // Store ans in VEctor and REturn
            result.push_back(output);
            return;
        }
    
    
    // Recursive CAll
        // '(' ke lia CAll
        if(remOp > 0){
            // Remaining Open Bracket > 0
            output.push_back('(');
            solve(currOpen+1 , currClose , remOp - 1 
                , remClo,output,result);
            // Backtracking
            output.pop_back();
        }
    
    
        // ')' ke lia CAll
        if(remClo > 0  && currOpen > currClose){
            // Remaining Close Bracket > 0 and Current Open Bracket >  Corrent Open Bracket
            output.push_back(')');
            solve(currOpen , currClose+1 , remOp  
                , remClo- 1,output,result);
            // Backtracking
            output.pop_back();
            
        }
    }
    
    
    vector<string> generateParenthesis(int n) {
        string output = "(";
        int currOpen = 1;
        int currClose = 0;
        int remOp = n-1;
        int remClo = n;
        vector<string> result;
        solve(1 ,0,remOp,remClo,output,result);
        return result;
    }
};
*/
void solve(int n , vector<string> &ans , string &output  , int o , int c){
    if(o+c >= n*2){
        ans.push_back(output);
        return;
    }
    if(o < n){
        output.push_back('(');
        solve(n , ans , output  , o+1 , c);
        output.pop_back();
    }
    if(c < n && c < o){
        output.push_back(')');
        if( o >  c ) solve(n , ans , output  , o , c+1);
        output.pop_back();
    }
    
}
vector<string> generateParenthesis(int n){
    vector<string> ans;
    string output = "";

    solve(n , ans , output  , 0 , 0);
    return ans;
}
int main() {
    int n = 3;
    vector<string> anss = generateParenthesis(n);
    for(auto i : anss) cout<<i<<" ";
    return 0;
}