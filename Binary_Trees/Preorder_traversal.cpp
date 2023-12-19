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
void preorder(node* root)                    //Funtion for traversing preorder DFS(depth for search)= root,left,right
{
    if(root == NULL)
    {
    return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
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

    preorder(root);
}