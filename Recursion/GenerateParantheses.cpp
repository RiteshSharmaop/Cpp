#include<bits/stdc++.h>
using namespace std;

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
int main(){
    int n;
    cin >> n;
    string output = "(";
    int currOpen = 1;
    int currClose = 0;
    int remOp = n-1;
    int remClo = n;
    vector<string> result;
    solve(currOpen ,currClose,remOp,remClo,output,result);

    // Printing REsult VEctor
    for(auto i:result) cout<<i<<" "<<endl;;
    cout<<endl;
    return 0;
}
