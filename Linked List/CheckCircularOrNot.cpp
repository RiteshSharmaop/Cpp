#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};
void treverse(Node* Head){
    Node* temp = Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void insertAtHead(Node* &Head , int d){
        // Step 1 : Create New Node
        Node* newNode = new Node(d);
        // Step 2 : Set next pointer to Head node
        newNode->next = Head;

        // Step 3 : Head Update
        Head = newNode;
    }

bool isCircle(Node* Head ){
    Node* temp = Head;
    while(temp != NULL){
        if(temp->next == Head){
            return true;
        }
        temp = temp -> next;
    }
    return false;
}
int main() {
     Node* first = new Node(4);
    Node* Head = first;


    insertAtHead(Head,5);
    insertAtHead(Head,7);
    insertAtHead(Head,9);
    insertAtHead(Head,11);
    insertAtHead(Head,13);
    treverse(Head);
    cout<<endl;
    // Check Circular
    // is Circular
    // Head->next = Head;


    cout<<"Circle or Not : "<<endl;
    if(isCircle(Head)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}