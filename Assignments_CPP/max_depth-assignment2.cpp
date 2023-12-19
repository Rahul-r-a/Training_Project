#include<iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};
node* newnode(int n)
{
    node* temp = new node;
    temp->data = n;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
int maxdepth(node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
    int leftd = maxdepth(root->left);
    int rightd = maxdepth(root->right);
    if(leftd>rightd)
    {
        return (leftd+1);
    }
    else
    {
        return (rightd+1);
    }
    }
}
int main()
{
    node *root;
    root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->right->right = newnode(4);
    root->right->left = newnode(5);
    root->right->left->right = newnode(6);

    cout << "Max depth of the tree is : " << maxdepth(root);
    return 0;
}
