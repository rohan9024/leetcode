// Basic Implementation of trees

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr){};
};

class BinaryTree
{
private:
    TreeNode *root;

public:
    BinaryTree() : root(nullptr){};

    void insert(int value)
    {
        root = insertRecursive(root, value);
    }

    TreeNode *insertRecursive(TreeNode *node, int value)
    {
        if (node == nullptr)
        {
            node = new TreeNode(value);
        }
        else
        {
            if (value <= node->data)
            {
                node->left = insertRecursive(node->left, value);
            }
            else
            {
                node->right = insertRecursive(node->right, value);
            }
        }

        return node;
    }

    void inorderTraversal(TreeNode *node)
    {
        if (node != nullptr)
        {
            inorderTraversal(node->left);
            cout << node->data << " ";
            inorderTraversal(node->right);
        }
    }
    void inorder()
    {
        inorderTraversal(root);
        cout << endl;
    }
};
int main()
{
    BinaryTree tree;

    tree.insert(100);
    tree.insert(20);
    tree.insert(30);

    cout << "Inorder traversal: ";
    tree.inorder();

    return 0;
}