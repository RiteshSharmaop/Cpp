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

void insertAtHead(Node* &Head , int d){
        // Step 1 : Create New Node
        Node* newNode = new Node(d);
        // Step 2 : Set next pointer to head node
        newNode->next = Head;
        // Step 3 : head Update
        Head = newNode;
    }

void insertAtPosition(Node* Head ,int pos, int d){
    // To Do : TAil Update while inserting at the end (n+1)
    // To Do : Validation this position should present in list should not increase n+1 size and should not to be empty

    if(pos == 1) {
        insertAtHead(Head , d);
    }else {
        //Step1 : Create New Node 
        Node* newNode = new Node(d);
        // Step 2 : Treverse to Previous Node (n-1)
        Node* prev = Head;
        // pos - 2 is because Head already at first node 
        // for going to second node (n-1) is already at first node
        // for going to 3rd node (n-2) we have to increase position by 1 ( head at 1 --> (increase by 1) head at 2)
        // position loop run for pos - 2 or  n - 2
        pos -= 2;
        while(pos--){
            prev = prev->next;
        }
        newNode->next = prev->next;
        prev->next = newNode;
    }
}
void treverse(Node* Head){
    
    Node* temp = Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void insertAtTAil(Node* &Tail , int d){
    // Step 1 : Creation Of Node
    Node* newNode = new Node(d);
    // Step 2 : Set Tail Next to Temp
    Tail->next = newNode;
    // update Tail
    Tail = newNode;
}

int main() {
    // Linked List Creation
    Node* first = new Node(4);
    Node* Head = first;


    // insertAtHead(Head,5);
    // insertAtHead(Head,7);
    // insertAtHead(Head,9);
    // insertAtHead(Head,11);
    // insertAtHead(Head,13);
    // treverse(Head);

    // if Both function in Node
    // Head->insertAtHead(Head,5);
    // Head->insertAtHead(Head,7);
    // Head->insertAtHead(Head,9);
    // Head->insertAtHead(Head,11);
    // Head->insertAtHead(Head,13);
    // Head->treverse(Head);


// Tail
    // we initialize or set the firstnode location in pointer so while we triverse we use it 
    Node* firstNode = first;
    Node* Tail = first;
    insertAtTAil(Tail,5);
    insertAtTAil(Tail,6);
    insertAtTAil(Tail,7);
    insertAtTAil(Tail,8);
    insertAtTAil(Tail,9);
    insertAtTAil(Tail,10);
    insertAtTAil(Tail,11);
    treverse(firstNode);
    cout<<endl;


    // Insert At Position
    insertAtPosition(Head,7,65);
    treverse(firstNode);

    return 0;
}