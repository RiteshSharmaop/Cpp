#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5,6,8,9};

    // binary search
    if(binary_search(arr,arr+9,6)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    if(binary_search(arr,arr+9,64)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    // lower bound
    cout<<lower_bound(arr,arr+9,7)-arr<<endl;

    // upper bound
    cout<<upper_bound(arr,arr+9,1)-arr<<endl;
    return 0;
}