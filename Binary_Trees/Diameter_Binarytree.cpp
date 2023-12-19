/*Given the root of a binary tree, return the length of the diameter of the tree.
The diameter of a binary tree is the length of the longest path between 
any two nodes in a tree. This path may or may not pass through the root*/

#include<iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
};
node* newnode(int n)                                                //function to create new node
{
    node* temp= new node;
    temp->data = n;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
int max(int a, int b)                                                 //Funtion to find max height
{
    if(a>b)
    return a;
    else
    return b;
}
int height(node* tree)                                               //Recursive function to find the height of subtrees
{
    if(tree==NULL)
    {
        return 0;
    }
    else
    return max(height(tree->left), height(tree->right))+1;
}
int diameter(node* root)                                              //Function to find the diameter of the binary tree
{
    if(root == NULL)
    {
        return 0;
    }
    else
    {
        int lefth = height(root->left);                             //For checking the height of the subtrees                          
        int righth = height(root->right); 

        int ld = diameter(root->left);
        int rd = diameter(root->right);

        return max(lefth+righth+1,max(ld,rd));                
    }
}
int main()
{
    int D=0;
    int num1=0, num2=0;
    node* root;
    root = newnode(28);
    root->left = newnode(15);
    root->left->right = newnode(16);
    root->left->right->right = newnode(18);
    root->left->right->right->left = newnode(17);
    root->left->right->right->left->left = newnode(10);
    root->right = newnode(29);
    root->left->left = newnode(9);
    root->right->right = newnode(30);

cout << "Nodes in the tree are : " << root->data << " " << root->left->data << " " << root->left->right->data << root->left->left->data <<  " " << root->left->right->right->data << flush;
cout << " " << root->left->right->right->left->data << " " << root->right->data << " " << root->right->right->data << endl;
D = diameter(root);
   cout << D << " : is the diameter of the tree " << endl;
    return 0;
    
}