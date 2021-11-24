/*write a program to implement all the tree traversal methods using classes */
#include <iostream>
using namespace std;
class BSTnode
{
public:
    int data;
    BSTnode *left, *right;
    BSTnode(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
/*Printing a Binary Tree according to PostOrder Traversal*/
void PostOrder(BSTnode *node)
{
    if (node == NULL)
        return;

    PostOrder(node->left);
    PostOrder(node->right);
    cout << node->data << " ";
}
/*Printing a Binary Tree according to InOrder Traversal*/
void InOrder(BSTnode *node)
{
    if (node == NULL)
        return;

    InOrder(node->left);
    cout << node->data << " ";
    InOrder(node->right);
}
/*Printing a Binary Tree according to PreOrder Traversal*/
void PreOrder(BSTnode *node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";
    PreOrder(node->left);
    PreOrder(node->right);
}
int main()
{
    BSTnode *root = new BSTnode(50);
    root->left = new BSTnode(41);
    root->right = new BSTnode(60);
    root->left->left = new BSTnode(32);
    root->left->right = new BSTnode(45);
    root->right->left = new BSTnode(55);
    root->right->right = new BSTnode(68);
    root->left->left->left = new BSTnode(15);
    root->left->left->right = new BSTnode(39);
    cout << "\nPREORDER TRAVERSAL OF BINARY TREE IS \n"<<endl;
    PreOrder(root);
    cout << "\nINORDER TRAVERSAL OF BINARY TREE IS \n"<<endl;
    InOrder(root);
    cout << "\nPOSTORDER TRAVERSAL OF BINARY TREE IS\n"<<endl;
    PostOrder(root);
    cout << endl;
    return 0;
}