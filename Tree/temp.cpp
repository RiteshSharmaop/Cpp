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

            cout << newNode->data << " ";
            if(newNode->left != NULL) q.push(newNode->left);
            if(newNode->right != NULL) q.push(newNode->right);

        }
    }
}
void bfs(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node *newNode = q.front();
        q.pop();
        if(newNode == NULL){
            if(!q.empty()){ // still elsement present
                q.push(NULL);
            }
        }else {
            // cout << newNode->data << " ";
            if(newNode->left != NULL) q.push(newNode->left);
            if(newNode->right != NULL) q.push(newNode->right);
            if(q.front() == NULL){
                newNode->right = NULL;
            }else {
                newNode->right = q.front();
            }
        }
    }
}
Node* connect(Node* root) {
    bfs(root);
    return root;
}
int main() {
    // 10 3 5 -1 -1 7 6 -1 -1 -1 11 -1 -1
    // Node* root =  buildTree();
    Node* root = NULL;
    root = buildTree();
    cout<<"Level - Order " <<endl;
    levelOrder(root);
    cout<<endl<<endl;
    Node* temp = connect(root);
    levelOrder(root);
    return 0;
}