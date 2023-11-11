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
// put all elem in stack then put all element of stack to queue
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

// print
void print(queue<int> temp){
    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
    }cout<<endl;
}
// TC-> O(N)
void rev(queue<int> &q){
    for(int i = 0 ; i < q.size()/2 ; i++) {
        swap(q.back(),q.front());
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


    // Approach 1 --> using Stack
    // queue -> stack -> queue
    // TC - O(N)
    // SC - O(N)
    // stack<int> st = reverseQueueUsingStack(q);
    // convertStackToQueue(st, q);
    // print(q);


    // Approah 2 --> using Recursion
    // reverseQueue(q);
    // print(q);

    
    //Approach 3 --> normal iteration and back, front, swap function 
    print(q);
    rev(q);
    print(q);

    return 0;
}