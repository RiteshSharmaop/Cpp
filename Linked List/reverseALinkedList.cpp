#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    
    Node(int d){
        this->data = d;
        this->next = NULL;
    }


};
void insertAtHead(int d , Node* &Head ){
    Node* temp = new Node(d);
    temp->next = Head;
    Head = temp;
}

void treverse(Node* &Head){
    Node* temp = Head;
    while(temp != NULL ){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
// Edge Case
/*
1. if we have 0 node in a list
2. if we have 1 node in a list

*/
void reverse(Node* &Head){
    // Edge Case
    if(Head == NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    Node* curr = Head;
    Node* prev = NULL;
    
    while(curr != NULL){
        // we store curr-> next to change the position of current after the reverse
        Node* Next = curr->next;
        // order of this three line should matter
        // Change the Link ans Connect To Privious
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    treverse(prev);
}
Node* reverseUsingREcursion(Node* &Head , Node* &curr , Node* prev){
    // BAse Case
    if(Head == NULL || curr == NULL){
        return prev;
    }
    Node* Next = curr->next;
    curr->next = prev;
    // prev = curr;
    // curr = Next;
    return reverseUsingREcursion(Head , Next , curr);

}
int main() {
    // /For Edge Case If List is empty
    // Node* first = NULL;
    Node* first = new Node(7);
    Node* firstNode = first;
    Node* Head = first;


    insertAtHead(2,Head);
    insertAtHead(1,Head);
    insertAtHead(3,Head);
    insertAtHead(4,Head);
    cout<<"Linked List"<<endl;
    treverse(Head);
    cout<<endl;

    // cout<<"After Reverse  using loop :"<<endl;
    // reverse(Head);

    // using Recursion
    Node* curr = Head;
    Node* prev = NULL;
    cout<<"Using REcursion"<<endl;
    Node* ans = reverseUsingREcursion(Head,Head,NULL);
    cout<<endl;
    treverse(ans);
    cout<<endl;
    cout<<prev->data; 


    return 0;
} 