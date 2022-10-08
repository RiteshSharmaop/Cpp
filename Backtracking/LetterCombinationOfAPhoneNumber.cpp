#include<bits/stdc++.h>
using namespace std;
void solve(string digit , int i , int a , int b , int digno,int n , vector<string> &arr ,vector<char> &v , string temp1, string temp2){
    if(i >= n -1  ){
        for(auto l : v) cout<< l <<" ";
        cout<<endl;
        return;

    }

    v.push_back(temp1[i]);
    v.push_back(temp2[i]);

    
}
int main() {
    string digit = "23";
    // cin>>digit;
    int n = 2;
    vector<string> arr = {"abc" , "def" , "ghi" , "jkl" ,"mno" , "pqrs", "tuv" ,"wxyz"  };
    int digno = stoi(digit);
    int a = 2-2;
    int b = 3-2;
    vector<char> v;
    string temp1 = arr[a];
    string temp2 = arr[b];
    // solve(digit ,0 ,a,b,digno , n , arr ,v,temp1,temp2);

    

    // Using Loops 
    // Time Complexity -> O(n^2)
    // Space Complexity -> O(1)

    // for(int i = 0 ; i < 3 ; i++){
    //     for(int  j = 0 ; j<3 ; j++){
    //         cout<<temp1[i] <<temp2[j]<<endl;
    //     }
    // }
    return 0;
}