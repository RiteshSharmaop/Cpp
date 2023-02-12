#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }

};

Node* buildTree(){
    cout<<"Enter DAta"<<endl;
    int data ;
    cin>>data;
    if(data == -1) return NULL;
    Node* newNode = new Node(data);

    cout<<"Enter DAta for Left Child of "<<data<<endl;
    newNode->left = buildTree();

    cout<<"Enter DAta for right Child of "<<data<<endl;
    newNode->right = buildTree();

    return newNode;
}
int main() {
    Node* root =  buildTree();

    return 0;
}