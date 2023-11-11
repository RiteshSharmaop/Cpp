#include<bits/stdc++.h>
using namespace std;
void reverseKElement(queue<int> &q,int k){
    if(k == 0) {
        return;
    }
    int ele = q.front();
    q.pop();
    reverseKElement(q,k-1);
    q.push(ele);
}
void solve(queue<int>&q,int k){
    for(int i = 0 ; i < q.size() - k ; ++i) {
        int ele = q.front();
        // cout << "* \n";
        q.pop();
        q.push(ele);
    }
    
}
void printAns(queue<int> &q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}
int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    int k = 3;
    /*Time complexity
        O(k)
        if k == q
        T.C-> O(N) || O(Q.size()) "Worst Case"

        otherwise O(k) + (O(q.size()-k)) == O(q.size())


    */
    /*Space Complexity
        O(k)
        worstcase : O(q.size()) || O(N) where n == size of queue
    */
    /*Algo
        1st k ele -> put in stack
        2nd put stack ele in queue
        put (n-k) ele of queue in queue
   */
    reverseKElement(q,k);
    solve(q,k);
    printAns(q);
    return 0;
}