//Preorder Traversal//
#include<iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};
node* newnode(int num)
{
    node* temp = new node;
    temp->data = num;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void inorder(node* root)                    //Funtion for traversing inordeorder DFS(depth for search)=left,root,right
{
    if(root == NULL)
    {
    return;
    }
    
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    node* root;
    root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->left->right->left = newnode(8);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    root->right->right->left = newnode(9);
    root->right->right->right = newnode(10);

    inorder(root);
}