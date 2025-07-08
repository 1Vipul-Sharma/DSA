#include <bits/stdc++.h>

using namespace std;

// 1. Define the Node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// 3. Build a sample tree
Node* buildSampleTree() {
    /*
           1
         /   \
        2     3
       / \
      4   5
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout<<root->data<<" ";
    return root;
}

int height(Node* node) {
    if(node==nullptr) return 0;
    int lh=height(node->left);
    int rh=height(node->right);
    return 1 + max(lh, rh);
}
// 4. Main function to test height
int main() {
    Node* root = buildSampleTree();
    cout<< "Height of the tree is: "<<height(root)<<endl;
    return 0;
}
