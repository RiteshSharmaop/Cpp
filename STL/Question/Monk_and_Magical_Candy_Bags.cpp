#include<bits/stdc++.h>
using namespace std;
int main() {
    /*
    Constraints:
    1 ≤ T ≤ 10
    1 ≤ N ≤ 10^5
    0 ≤ K ≤ 10^5
    0 ≤ Ai ≤ 10^10

    */
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multiset<long long> s;
        for(int i = 0 ; i < n ; i++){
            long long candiesCount;
            cin>>candiesCount;
            s.insert(candiesCount);
        }
        long long totalCandies = 0;
        while(k--){
            auto lastIt = (--s.end());
            long long candiesCount = (*lastIt);
            totalCandies += candiesCount;
            s.erase(lastIt);
            s.insert(candiesCount/2);
        }
        cout<<totalCandies<<endl;
    }

    return 0;
}