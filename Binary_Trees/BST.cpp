/*Given a binary search tree (BST), find the lowest common ancestor (LCA) 
node of two given nodes in the BST.
According to the definition of LCA on Wikipedia: “The lowest common 
ancestor is defined between two nodes p and q as the lowest node in T
that has both p and q as descendants (where we allow a node to be a
descendant of itself).”*/

#include<iostream>
using namespace std;
 
class node {
public:
    int data;
    node *left, *right;
};
 
node* lca(node* root, int n1, int n2)                         //* Function to find LCA of n1 and n2.
{
    if (root == NULL)
        return NULL;
 
    else if (root->data > n1 && root->data > n2)                     // If both n1 and n2 are smaller  than root, then LCA lies in left
                                                                
        return lca(root->left, n1, n2);
 
    else if (root->data < n1 && root->data < n2)                          // If both n1 and n2 are greater than root, then LCA lies in right
                                                                     
        return lca(root->right, n1, n2);
 
    return root;
}
 
node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = Node->right = NULL;
    return (Node);
}
 
int main()
{
    node* root = newNode(20);
    root->left = newNode(8);
    root->right = newNode(22);
    root->left->left = newNode(4);
    root->left->right = newNode(12);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(14);

    int n1 = 10, n2 = 14;
    node* t = lca(root, n1, n2);
    cout << "LCA of " << n1 << " and " << n2 << " is "
         << t->data << endl;
 
    n1 = 14, n2 = 8;
    t = lca(root, n1, n2);
    cout << "LCA of " << n1 << " and " << n2 << " is "
         << t->data << endl;
 
    n1 = 10, n2 = 22;
    t = lca(root, n1, n2);
    cout << "LCA of " << n1 << " and " << n2 << " is "
         << t->data << endl;
    return 0;
}
 

