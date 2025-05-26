#include <iostream>
using namespace std;

// Node template
template <typename T>
class TreeNode {
public:
    T data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(T val) : data(val), left(nullptr), right(nullptr) {}
};

// Binary Tree template
template <typename T>
class BinaryTree {
private:
    TreeNode<T>* root;

    // Recursive insert
    TreeNode<T>* insert(TreeNode<T>* node, T val) {
        if (!node) return new TreeNode<T>(val);
        if (val < node->data)
            node->left = insert(node->left, val);
        else
            node->right = insert(node->right, val);
        return node;
    }

    // Inorder traversal (Left, Root, Right)
    void inorder(TreeNode<T>* node) {
        if (!node) return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    // Preorder traversal (Root, Left, Right)
    void preorder(TreeNode<T>* node) {
        if (!node) return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    // Postorder traversal (Left, Right, Root)
    void postorder(TreeNode<T>* node) {
        if (!node) return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }

    // Destructor helper
    void destroy(TreeNode<T>* node) {
        if (!node) return;
        destroy(node->left);
        destroy(node->right);
        delete node;
    }

public:
    BinaryTree() : root(nullptr) {}
    ~BinaryTree() { destroy(root); }

    void insert(T val) {
        root = insert(root, val);
    }

    void inorder() {
        cout << "Inorder traversal: ";
        inorder(root);
        cout << endl;
    }

    void preorder() {
        cout << "Preorder traversal: ";
        preorder(root);
        cout << endl;
    }

    void postorder() {
        cout << "Postorder traversal: ";
        postorder(root);
        cout << endl;
    }
};