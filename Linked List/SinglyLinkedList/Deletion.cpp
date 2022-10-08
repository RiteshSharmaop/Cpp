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

void insertAtTAil(Node* &Tail , int d,int &size){
    // Step 1 : Creation Of Node
    Node* newNode = new Node(d);
    // Step 2 : Set Tail Next to Temp
    Tail->next = newNode;
    // update Tail
    Tail = newNode;

    size++;
}
void DeleteByVAlue(Node* &Head , int pos , int target , int &size ){
    // if List is Empty
    if(Head == NULL){
        cout<<"Empty Linked List : "<<endl;
        return;
    }

    Node* temp = Head;
    // Node* prev = Head;
    Node* prev = NULL;

    if(target == temp->data && pos == 1){
        Head = Head -> next;
        size--;
        temp = NULL;
        delete temp;
    }else{
        while(target !=  temp->data){
            prev = temp;
            temp = temp -> next;
        }
        // Here we Assumed that we have found the element
        prev->next = temp -> next;
        temp -> next = NULL;
        size--;
        delete temp;
    }
}
int GetLength(Node* &Head)
{
    Node* temp = Head;
    int len = 0;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }

    return len;

    // int len = 0;
    // while(temp->next!=NULL){
    //     temp = temp->next;
    //     len++;
    // }
    // return len;
}
int main() {
    Node* first = new Node(4);
    Node* Head = first;
    int size = 1;
    Node* firstNode = first;
    // tail start from first node
    Node* Tail = first;
    insertAtTAil(Tail,5,size);
    insertAtTAil(Tail,6,size);
    insertAtTAil(Tail,7,size);
    insertAtTAil(Tail,8,size);
    insertAtTAil(Tail,9,size);
    insertAtTAil(Tail,10,size);
    insertAtTAil(Tail,11,size);
    insertAtTAil(Tail,12,size);
    // Tail at Last node now if we print or trever on tail then we get only last node data
    treverse(firstNode);
    cout<<endl;


    // if list is Empty
    // Node* Head2 = NULL;
    // DeleteByVAlue(Head2 , 1 , 7 );
    // treverse(Head2);

    // Deletion 
    cout<<"size : "<<size<<endl;
    cout<<"Length using Function : "<<GetLength(Head)<<endl;;
    DeleteByVAlue(Head , size , 12 , size );
    treverse(Head);

    // Checking Size
    cout<<endl;
    cout<<"size : "<<size<<endl;
    
    cout<<"Length using Function : "<<GetLength(Head)<<endl;;
    return 0;
}