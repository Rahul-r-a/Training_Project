/*finding the lowest common ancestor of a binary search tree between two nodes*/
/*given numbers 20=rootnode, 8, 22, 4, 12, 10, 14*/
#include<iostream>
using namespace std;
class node                                //Class of node created 
{
    public :
            int data=0;                   //Member variable data for storing value in node
            node *left;                   //Created  pointer objects for left and right subtree 
            node *right;
};
node* newnode(int num)                    //Function for creating nodes
{
   node* temp = new node;
   temp->data=num;
   temp->left=NULL;
   temp->right=NULL;
   return temp;
}
node* lca(node* root, int n1, int n2)
{
    if(root == NULL)
    {
        return NULL;
    }
    else if(root->data > n1 && root->data > n2)
    {
        return lca(root->left,n1,n2);
    }
    else if(root->data<n1 && root->data<n2)
    {
        return lca(root->right,n1,n2);
    }
    return root;
}
int main()
{
    node *root;                                  //Pointer object created for root

     root = newnode(20);                        //Root node created with value
     cout << endl;
     cout << root->data << endl;

     root->left = newnode(8);                   //Created the binary search tree
     root->right = newnode(22);
     root->left->left = newnode(4);
     root->left->right = newnode(12);
     root->left->right->left = newnode(10);
     root->left->right->right = newnode(14);
    

     int num1=0,num2=0;
     while(1)                                       //Looping to find the LCA for different nodes
     {
     cout << "\nEnter the node values to check the LCA : " << flush;
     cin >> num1;
     cin >> num2;
     node* LCA = lca(root,num1,num2);
     cout << "\nThe LCA of nodes " << num1 << " & " << num2 << " is : " << LCA->data << endl;
     
     }
     return 0;

} 