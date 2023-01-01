#include<bits/stdc++.h>
using namespace std;


template <typename T>
class BinaryTreeNode{
    public:
    T data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(T data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};

void print(BinaryTreeNode<int> *root){
    if (root==NULL){
        return;
    }
    cout<<root->data<<":"<<endl;
    print(root->left);
    print(root->right);
}
int main(){
    BinaryTreeNode<int> *root=new BinaryTreeNode<int>(1);
    BinaryTreeNode<int> *node1=new BinaryTreeNode<int>(2);
    BinaryTreeNode<int> *node2=new BinaryTreeNode<int>(3);
    root->left=node1;
    root->right=node2;
    print(root);
    delete root;
}