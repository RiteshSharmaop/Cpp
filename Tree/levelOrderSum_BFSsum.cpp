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
    cout<<"Enter Data : "<<endl;
    int data;
    cin>>data;
    if(data == -1) return NULL;
    Node* newNode = new Node(data);

    cout<<"Enter Data for Left Child of "<<data<<endl;
    newNode->left = buildTree();

    cout<<"Enter Data for right Child of "<<data<<endl;
    newNode->right = buildTree();

    return newNode;
}

void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int sum = 0;
    while(!q.empty()){
        Node *newNode = q.front();
        q.pop();

        if(newNode == NULL){
            cout << endl;
            // check
            if(!q.empty()){ // still elsement present
                q.push(NULL);
            }
        }else {
            sum += newNode->data;
            cout << newNode->data << " ";
            if(newNode->left != NULL) q.push(newNode->left);
            if(newNode->right != NULL) q.push(newNode->right);

        }
    }
    cout << sum << endl;
}

int main() {
    // 10 3 5 -1 -1 7 6 -1 -1 -1 11 -1 -1
    // Node* root =  buildTree();
    Node* root = NULL;
    root = buildTree();
    cout<<"Level - Order " <<endl;
    levelOrder(root);
    return 0;
}