//max height of a npode will be  longest chain of the tree + 1 (main node)
//so find height of left subtree and right subtree and then find the max anongst them i.e MAX(h1,h1) and then  +1

//SKELETON:

#include<iostream>
#include<queue>
using namespace std;
struct node {
    int data;         // This stores the value (or data) of the node.
    node* left;       // Pointer to the left child node.
    node* right;      // Pointer to the right child node.

    // Constructor: Initializes a new node with a given value (val).
    node(int val) {
        data = val;        // Assign the value to the node.
        left = nullptr;    // The left child is initially set to null (no child).
        right = nullptr;   // The right child is also set to null (no child).
    }
};


class solution
{
    public:
    int height (struct node* node)

    {
        if (node==NULL)
        {return 0;
        }
int h1=height(node->left);  //recursive call for left subtree
int h2=height(node->right);
int max_size= max(h1,h2) + 1;
return max_size;
    }
    
};

int main() {
    // Creating nodes of the binary tree
    node* root = new node(1);      // Root node with data = 1
    root->left = new node(2);      // Left child of root with data = 2
    root->right = new node(3);     // Right child of root with data = 3
    root->left->left = new node(4); // Left child of node 2 with data = 4
    root->left->right = new node(5); // Right child of node 2 with data = 5
    root->right->left = new node(6); // Left child of node 3 with data = 6
    root->right->right = new node(7); // Right child of node 3 with data = 7

    // Creating an instance of the solution class
    solution sol;

    // Calculating and printing the height of the binary tree
    cout << "Height of the binary tree: " << sol.height(root) << endl;

    return 0;
}