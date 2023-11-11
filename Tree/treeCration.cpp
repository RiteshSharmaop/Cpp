#include<bits/stdc++.h>
using namespace std;
class Node {
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

Node* treeBuild(){
    cout << "Enter Value for data : \n";
    int data;
    cin >> data;
    if (data == -1) {
        cout << "return -1 \n"; 
        return NULL;
    }  
    Node* newNode = new Node(data);
    cout <<"Left of  "<< data << endl;
    newNode->left = treeBuild();
    cout <<"Right of  "<< data << endl;
    newNode->right = treeBuild();
}
int main() {
    Node* tree = NULL;
    tree = treeBuild();
    return 0;
}