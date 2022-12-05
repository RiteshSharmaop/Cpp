#include<bits/stdc++.h>
using namespace std;
// Hashing CP Playlist Pre-Computatiion

/* Worst Case
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int count = 0;
        for(int i = 0 ; i < n ; i++){
            if(a[i] == x) count++;
        }
        cout<<count<<endl;
    }

    // T.c --> O(n) + O(q*n) = O(n^2) = 10^10
    return 0;
}  */

const int n = 1e5+10;
int hsh[n] = {0}; // Hash Array // here it is not important to inisialise array with 0 because in global array always initialise  with 0
int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
        hsh[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;;
    }
}