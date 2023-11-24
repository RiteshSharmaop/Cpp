#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    try{
        cin >> a >> b ;
        if(b <= 0) throw b;
        else cout << a/b << endl;
    }catch(int b){
        cout << "Enter Correct Value"  << endl;

    }
    
    return 0;
}