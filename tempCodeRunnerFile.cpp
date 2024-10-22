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