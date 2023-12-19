#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node*right;
};
node* newnode(int num)                     //Function for creating a new node
{
    node* temp = new node;                 //New node is created and assigned to a temp node 
    temp->data = num;
    temp->left = NULL;                     //Initiall left and right part of node ie leafs will be NULL
    temp->right = NULL;
     return temp;                          //Returning the node created
}
int main()
{
    int n=0;
    node *root;                                                       //Sructure created with root 
    cout << "Enter the number to create a root node : " << flush;
    cin >> n;
    root = newnode(n);                                                //Root node created and value added
    cout << "Value inside root node is  : " << root->data << endl;
    root->data =25;                                                   //Value inside root node is changed
    cout << "Value of root node after change is  : " << root->data << endl;
    root->left = newnode(10);
    cout << "Value inside node is : " << root->left->data << endl;    //Assigned value to left subtree
    root->right = newnode(27);                                              //Assigned value to right subtree
    cout << "Value inside node is  : " << root->right->data << endl;
    return 0;
}