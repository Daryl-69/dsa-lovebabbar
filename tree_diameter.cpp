
//NOTE THERE IS A BETTER MEMTHORD, THIS IS O(N2) 
YOU DO THE BETTER METHORD BY USING PAIR(INT,INT) FUNCTION CHECK LECTURE 69 Q2 PART 2
//there ate three ways to find the doameter : 1. find the diameter of left node: h1
                                //            2. ""    ""     ""      right  " : h2
                                // find the total height of tree: h1+h2+1
 
                                //then,max(h1,h2,h3) becomesthe diameter of the tree
                            

#include <iostream>
#include <algorithm> // For std::max
using namespace std;

// Definition for a binary tree node.
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
private:
    int height(Node* node) {
        if (node == NULL) {
            return 0;
        }
        int h1 = height(node->left);   // Recursive call for left subtree
        int h2 = height(node->right);  // Recursive call for right subtree
        return max(h1, h2) + 1;         // Return height of the tree
    }

public:
    int diameter(Node* root) {
        if (root == NULL) {
            return 0;
        }
        int op1 = diameter(root->left);               // Diameter of left subtree
        int op2 = diameter(root->right);              // Diameter of right subtree
        int op3 = height(root->left) + height(root->right) + 1; // Diameter through the root
        return max(op1, max(op2, op3));               // Return maximum of the three
    }
};

int main() {
    // Creating nodes of the binary tree
    Node* root = new Node(1);      // Root node with data = 1
    root->left = new Node(2);      // Left child of root with data = 2
    root->right = new Node(3);     // Right child of root with data = 3
    root->left->left = new Node(4); // Left child of node 2 with data = 4
    root->left->right = new Node(5); // Right child of node 2 with data = 5
    root->right->left = new Node(6); // Left child of node 3 with data = 6
    root->right->right = new Node(7); // Right child of node 3 with data = 7

    // Creating an instance of the Solution class
    Solution sol;

    // Calculating and printing the diameter of the binary tree
    cout << "Diameter of the binary tree: " << sol.diameter(root) << endl;

    // Clean up memory (not strictly necessary for a small example like this)
    // You can implement a function to delete the tree if needed.

    return 0;
}
