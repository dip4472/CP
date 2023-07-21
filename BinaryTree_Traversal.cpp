#include<bits/stdc++.h>
using namespace std;
//Structure from constructing the Binary Tree
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
//INORDER TRAVERSAL (RECURSIVE)
void inorder(Node* root,vector<int>&in)
{
    // return if the current node is empty
    if (root == NULL) {
        return;
    }
 
    // Traverse the left subtree
    inorder(root->left,in);
 
    // Push the data part of the root (or current node) into the vector
    in.push_back(root->data); 
 
    // Traverse the right subtree
    inorder(root->right,in);
}
//PREORDER TRAVERSAL (RECURSIVE)
void preorder(Node* root,vector<int>&pre)
{
    // if the current node is empty
    if (root == NULL) {
        return;
    }
 
    //Push the data part of the root (or current node) in the vector
    pre.push_back(root->data); 
 
    // Traverse the left subtree
    preorder(root->left,pre);
 
    // Traverse the right subtree
    preorder(root->right,pre);
}
//POST ORDER TRAVERSAL (RECURSIVE)
void postorder(Node* root,vector<int>&post)
{
    // if the current node is empty
    if (root == NULL) {
        return;
    }
 
    // Traverse the left subtree
    postorder(root->left,post);
 
    // Traverse the right subtree
    postorder(root->right,post);
 
    //Push the data part of the root (or current node) in the vector
    post.push_back(root->data);
}

int main()
{
    /* Construct the following tree
               1
             /   \
            /     \
           2       3
          /      /   \
         /      /     \
        4      5       6
              / \
             /   \
            7     8
    */
 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
    vector<int>in,pre,post;
    inorder(root,in);
    preorder(root,pre);
    postorder(root,post);
    //The vectors accordingly contain the traversal wise data of the given binary tree.
 
    return 0;
}