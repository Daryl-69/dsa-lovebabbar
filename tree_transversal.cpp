//There are three types of tree transversal
/*
1. Inorder transversal (LNR)
2. Pre-order transversal(NLR)
3. Post-order transversal (LRN)

*/
#include<iostream>
#include<queue>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int d) {
        this -> data = d; //this is for the main node
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root) {
     int data;
    cout << "Enter the data: " << endl;
    cin >> data;
    root = new node(data);    

    if(data == -1) {    //-1 is taken as
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left); //recursive call #1
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right); //recursive call #2
    return root;

}

//transversal basic syntax 
void levelOrderTraversal(node* root) {
    queue<node*> q;  //pushing the tree elements in a queue q
    q.push(root);  //putting the value of root in the queue first
    q.push(NULL);  //helps to go to the next line (check output) Also known as SEPERATOR 

    while(!q.empty()) {  //till q is not empty
        node* temp = q.front(); 
        q.pop();

        if(temp == NULL) {  //IF TEMP COMES NULL HERE IT MEANS ALL THE ELEMENTS OF THE BEFORE LEVEL HAS BEEN PUSHED TO QUEUE
            //
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL); //ANOTHER SEPARATOR 
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left); //putting in the left and right elements now 
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }
}

//transversal 1:
    void inorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//teansversal 2:
void preorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

//transversal 3:
void postorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}
int main(){
    node* root = NULL;

    //making tree syntax:
    root =buildTree(root);
//1 5 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    //trnasversal implimentation syntax:
    levelOrderTraversal(root);

cout<<"inorder transversal is: ";
inorder(root);


    return 0;
}