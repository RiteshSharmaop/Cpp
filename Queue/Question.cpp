#include<bits/stdc++.h>
using namespace std;

void print(deque<int> &q){
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop_front();
    }
}
void solve(queue<int> &q){
    deque<int> dq,d;
    int n = q.size(),nn = n;
    nn /= 2;
    while(!q.empty()){
        if(n > nn){
            int ele = q.front();
            dq.push_front(ele);
        }else {
            int ele = q.front();
            dq.push_back(ele);
        }
        q.pop();
        n--;
    }
    while(!dq.empty()){
        d.push_front(dq.back());
        d.push_front(dq.front());
        dq.pop_back();
        dq.pop_front();
    }
 
    print(d);
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    solve(q);
    return 0;
}