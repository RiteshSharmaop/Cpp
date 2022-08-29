#include<iostream>
using namespace std;

int Expo(int a,int b){
    // High Time And Space Complexity
    if(b==0) return 1;
    if(b==1) return a;
    return a*Expo(a,b-1);
}
int FastExpo(int a,int b){
    //  BAse Case
    if(b==0) return 1;
    if(b==1) return a;

    // Recursive CAll
    int ans = FastExpo(a,b/2);

    // Processing
    // B is even 
    if(b%2 == 0){
        return ans*ans;
    }else{
        return a*ans*ans;
    }

}
int main(){
    int a,b;
    cin>>a>>b;
    
    // cout<< "High Time Ans Space Complexity : " <<Expo(a,b)<<endl;
    cout<< "FasterThan Previous One : " <<FastExpo(a,b);


    return 0;
}