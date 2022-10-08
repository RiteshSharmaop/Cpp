#include<bits/stdc++.h>
using namespace std;
// By using Boolean Flag
bool flag = false;
void AnyOneSubSequenceUsingFlag(int i , vector<int> &v , int arr[], int n,int sum ,int summ){
    // Bc 
    if(i>=n){
        if(sum == summ && flag == false){
            flag = true;
            cout<< "[ ";
            for(auto j : v) cout<< j<<" ";
            cout<< "]";
            cout<<endl; 
        }

        return;
    }
    
    v.push_back(arr[i]);
    sum = sum+arr[i];
    AnyOneSubSequenceUsingFlag(i+1 , v , arr,n,sum ,summ);
    v.pop_back();
    sum = sum-arr[i];
    AnyOneSubSequenceUsingFlag(i+1 , v , arr,n,sum ,summ);
}

// Without Using Boolean Flag
// Uaing Functional Methods
bool AnyOneSubSequenceWithoutUsingFlag(int i , vector<int> &v , int arr[], int n,int sum ,int summ){
    // Bc 
    if(i>=n){
        // Condition Satisfied
        if(sum == summ ){
            cout<< "[ ";
            for(auto j : v) cout<< j<<" ";
            cout<< "]";
            cout<<endl; 
            return true;
        }
        // Condition Not Satisfied
        return false;
    }
    
    v.push_back(arr[i]);
    sum = sum+arr[i];
    // Pick
    if(AnyOneSubSequenceWithoutUsingFlag(i+1 , v , arr,n,sum ,summ) == true){
        return true;
    }
        v.pop_back();
    sum = sum-arr[i];
    // Not Pick
    if (AnyOneSubSequenceWithoutUsingFlag(i+1 , v , arr,n,sum ,summ) == true) return true;
    
    // if BOth Do not Return true then return false 
    
    return false;
    
    
}
int main(){
    int arr[] = {1,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    int summ = 2;
    int sum = 0;
    // AnyOneSubSequenceUsingFlag(0 , v , arr,n,sum  ,summ);
    AnyOneSubSequenceWithoutUsingFlag(0 , v , arr,n,sum ,summ);(0 , v , arr,n,sum  ,summ);
    return 0;
}