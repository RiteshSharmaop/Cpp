#include<bits/stdc++.h>
using namespace std;
void reverseQueue(queue<int> &q){
    if(q.empty()){
        return;
    }
    int ele = q.front();
    q.pop();
    reverseQueue(q);
    q.push(ele);
}
stack<int> reverseQueueUsingStack(queue<int> &q){
    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    return st;
}

void convertStackToQueue(stack<int> st , queue<int> &q){
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }cout<<endl;
}
void print(queue<int> &temp){
    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
    }cout<<endl;
}
int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    // Approah 1 --> using Recursion
    // reverseQueue(q);
    // print(q);

    // Approach 2 --> using Stack
    stack<int> st = reverseQueueUsingStack(q);
    convertStackToQueue(st, q);
    print(q);

    return 0;
}