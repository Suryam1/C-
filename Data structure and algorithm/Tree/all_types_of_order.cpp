#include <iostream>
#include<queue>
using namespace std;

template <typename T>
class BinaryTreeNode {
public:
T data;
BinaryTreeNode* left;
BinaryTreeNode* right;

BinaryTreeNode(T data) {
this->data = data;
left = NULL;
right = NULL;
}

~BinaryTreeNode() {
delete left;
delete right;
}
};


BinaryTreeNode<int>* takeInputLevelWise() {
int rootData;
cout << "Enter root data" << endl;
cin >> rootData;
if (rootData == -1) {
return NULL;
}

BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

queue<BinaryTreeNode<int>*> pendingNodes;
pendingNodes.push(root);
while (pendingNodes.size() != 0) {
BinaryTreeNode<int>* front = pendingNodes.front();
pendingNodes.pop();
cout << "Enter left child of " << front->data << endl;
int leftChildData;
cin >> leftChildData;
if (leftChildData != -1) {
BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
front->left = child;
pendingNodes.push(child);
}
cout << "Enter right child of " << front->data << endl;
int rightChildData;
cin >> rightChildData;
if (rightChildData != -1) {
BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
front->right = child;
pendingNodes.push(child);
}
}
return root;
}

void preOrder(BinaryTreeNode<int> *root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
   
}

void inOrder(BinaryTreeNode<int> *root){
    if (root!=NULL){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

void postOrder(BinaryTreeNode<int> *root){
    if(root==NULL){
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    BinaryTreeNode<int> *root=takeInputLevelWise();
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    delete root;
}