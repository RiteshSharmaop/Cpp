#include<bits/stdc++.h>
using namespace std;
const long  long int  N = 1e7+10;
vector<bool> isPrime(N,1);
vector<int> lp(N) , hp(N); // we dont have to init all lp or hp element by zero because this is already init zero
int main() {
    isPrime[0] = isPrime[1] = false;
    for(int i = 2 ; i < N ; i++){
        if(isPrime[i]){
            for(int j = i * 2 ; j < N ; j += i){
                isPrime[j] = false;
                hp[j] = i;
                if(lp[j] == 0) lp[j] = i;
            }
        }
    }
    int n;
    cin >> n;
    for(int i = 1 ; i < n ; ++i){
        cout << i << " " << isPrime[i] << " " << lp[i] << " " << hp[i] <<endl;
    }
    return 0;
}