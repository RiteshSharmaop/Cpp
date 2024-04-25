#include<bits/stdc++.h>
using namespace std;
const long  long int  N = 1e7+10;
vector<bool> isPrime(N,1);
vector<int> allPrime;
unordered_map<int , vector<int>> all;
int main() {
    isPrime[0] = isPrime[1] = false;
    allPrime.emplace_back(1);

    for(int i = 2 ; i < N ; i++){
        all[i].push_back(1);
        if(isPrime[i]){
            allPrime.emplace_back(i);
            for(int j = i * 2 ; j < N ; j += i){
                all[j].push_back(i);
                isPrime[j] = false;
            }
        }
    }
    int kl = allPrime.size();
    
    for(auto i : all){
        if(i.first == 100) break;
        cout << i.first << " ";
        for(auto j : i.second) cout << j << " ";
        cout <<endl;
    }
    return 0;
}