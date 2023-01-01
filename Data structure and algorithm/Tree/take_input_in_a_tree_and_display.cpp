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
BinaryTreeNode<int> *takeinput(){
        int rootdata;
        cout<<"Enter data"<<endl;
        cin>>rootdata;
        if (rootdata==-1){
            return NULL;
        }
        BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootdata);
        BinaryTreeNode<int> *leftchild=takeinput();
        BinaryTreeNode<int> *rightchild=takeinput();
        root->left=leftchild;
        root->right=rightchild;
        return root;
    }

void print(BinaryTreeNode<int> *root){
    if (root==NULL){
        return;
    }
    cout<<root->data<<":"<<endl;
    if (root->left!=NULL){
        cout<<"L"<<root->left->data;
    }
    if (root->right!=NULL){
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    print(root->left);
    print(root->right);
}
int main(){
    BinaryTreeNode<int> *root=takeinput();
    print(root);
    delete root;
}