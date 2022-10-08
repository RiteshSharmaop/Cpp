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

void treverse(Node* &Head , int &Length){
    Node* temp = Head;
    while(temp != NULL ){
        Length++;
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* MiddleofTheList(Node* Head, int Length){
    // Edge Case
    if(Head == NULL){
        cout<<"List is Empty"<<endl;
        return NULL;
    }
    Length /= 2;
    Node* curr = Head;
    int num = 1;
    while(Length--){
        curr = curr->next;
    }
    return curr;
    // Time Complexity
    // O(n) -> treverse For Length
    // O(n/2) ->treverse to get Answers
    // T.C -> O(n)+O(n/2)
}
Node* GetMiddle(Node* &Head){
    // Edge Case
    if(Head == NULL){
        cout<<"List is Empty"<<endl;
        return NULL;
    }
    // Two Pointer Approach
    Node* slow = Head; 
    Node* fast = Head;
    while(fast != NULL && fast -> next != NULL){
        // slow -> 1 Step
        slow = slow->next;
        // fast -> 2 Step
        fast = fast->next->next;
    } 
    return slow;
}
// Node* GetMiddleee(Node* &Head){
//     // Two Pointer Approach
//     Node* slow = Head; 
//     Node* fast = Head;
//     while(fast != NULL ){
//         fast = fast -> next;
//         if( fast != NULL){
//             // slow -> 1 Step
//             slow = slow->next;
//             // fast -> 2 Step
//             fast = fast->next;
//         }
//     } 
//     return slow;
// }

int main() {
    // /For Edge Case If List is empty
    // Node* first = NULL;
    Node* first = new Node(5);
    Node* firstNode = first;
    // Node* Head = first;

    // insertAtHead(4,Head);
    // insertAtHead(3,Head);
    // insertAtHead(2,Head);
    // insertAtHead(1,Head);
    int Length = 0;
    Node* Head = NULL;
    cout<<"Linked List"<<endl;
    treverse(Head,Length);
    cout<<endl; 
    cout<<Length<<endl;

    cout<<"Singe Pointer Approach T.C. -> O(n) + O(n/2) "<<endl;
    Node* midd = MiddleofTheList(Head,Length);
    cout<<"Middle : " << midd  <<endl;
    cout<<endl;
    cout<<"2 Pointer Approach T.C. -> "<<endl;
    Node* middle = GetMiddle(Head);
    cout<<"Middle is At : "<<middle->data;
    return 0;
} 