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

void treverse(Node* &Head , int &count){
    Node* temp = Head;
    while(temp != NULL ){
        count++;
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void MiddleofTheList(Node* Head, int count){
    count /= 2;
    count +=1;
    Node* Next;
    Node* curr = Head;
    int num = 1;
    while(curr != NULL){
        Node* Next = curr;
        if(count <=num){
            cout<<curr->data<<" ";
        }
        curr = curr->next;
        num++;
    }
}
// void 
int main() {
    // /For Edge Case If List is empty
    // Node* first = NULL;
    Node* first = new Node(6);
    Node* firstNode = first;
    Node* Head = first;


    insertAtHead(5,Head);
    insertAtHead(4,Head);
    insertAtHead(3,Head);
    insertAtHead(2,Head);
    insertAtHead(1,Head);
    int count = 0;
    cout<<"Linked List"<<endl;
    treverse(Head,count);
    cout<<endl;
    cout<<count<<endl;
    MiddleofTheList(Head,count);
    

    return 0;
} 