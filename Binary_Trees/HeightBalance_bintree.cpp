/* Height balance checking in binary tree
 from left and right sub tree root node will check height from max depth
*/

#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node *newnode(int n)
{
    node *temp = new node;
    temp->data = n;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
int balanced(node *root)
{
    int b = 0;
    int lefth = 0, righth = 0;
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        lefth = balanced(root->left);
        if (lefth == -1)
        {
            return -1;
        }

        righth = balanced(root->right);
        if (righth == -1)
        {
            return -1;
        }
        
        if (abs(lefth - righth) > 1)                            //MOduloues of difference of left height and right height
        {
            return -1;
        }

        return max(lefth, righth) + 1;                          //Function and Condition for finding height of each node
    }
}
int main()
{
    int balancefactor = 0;
    /* 10
     /  \
    5   15
   / \    \
  2   7   20
     / \
    6   8*/

    node *root;
    root = newnode(10);
    root->left = newnode(5);
    root->right = newnode(15);
    root->left->left = newnode(2);
    root->left->right = newnode(7);
    root->left->right->left = newnode(6);
    root->left->right->left->left = newnode(4);
    root->left->right->left->left->left = newnode(3);
    root->left->right->right = newnode(8);
    root->right->right = newnode(20);

    balancefactor = balanced(root); 
    if (balancefactor==-1)
    {
        cout << "\nTree is not height Balanced\n"
             << endl;
    }
    else
    {
        cout << "\nTree is height Balanced\n"
             << endl;
    }

    delete root;
    delete root->left;
    delete root->right;
    delete root->left->left;
    delete root->left->right;
    delete root->left->right->left;
    delete root->left->right->left->left;
    delete root->left->right->left->left->left;
    delete root->left->right->right;
    delete root->right->right;
    return 0;
}
