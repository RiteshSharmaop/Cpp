#include<bits/stdc++.h>
using namespace std;
const long  long int  N = 1e7+10;
vector<bool> isPrime(N,1);
vector<int> allPrime;
int main() {
    isPrime[0] = isPrime[1] = false;
    allPrime.emplace_back(1);
  
    for(int i = 2 ; i < N ; i++){
      if(isPrime[i])allPrime.emplace_back(i);
        if(isPrime[i]){
            for(int j = i * 2 ; j < N ; j += i){
                isPrime[j] = false;
            }
        }
    }
    int n;
    cin >> n;
    for(int i = 1 ; i < allPrime.size() ; ++i){
        cout << allPrime[i] << endl;
    }
    return 0;
}