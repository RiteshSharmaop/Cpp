#include<bits/stdc++.h>
using namespace std;

class Node{
    // DAta Member
    public:
    int data;
    Node* next;

    // Constructor
    Node(int d){
        // initialize
        this->data = d;
        this->next = NULL;
    }

};

int main() {
    // Linked List Creation
    Node* first = new Node(4);
    cout<<first->data<<endl;
    cout<<first->next<<endl;


    return 0;
}