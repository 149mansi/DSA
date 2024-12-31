// Inorder = LNR
#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
Node *buildTree()
{
    int data;
    cout << "Enter the data: " << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    // step A,B,C
    Node *root = new Node(data);
    cout << "Enter data for left part of" << data << "node" << endl;
    root->left = buildTree();
    cout << "Enter data for right part of" << data << "node" << endl;
    root->right = buildTree();
    return root;
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    // intially
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        // A
        Node *temp = q.front();
        // B
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            // c
            cout << temp->data << " ";
            // D
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void inorderTraversal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    // LNR
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}
int main()
{
    Node *root = NULL;
    root = buildTree();
    levelOrderTraversal(root);

    return 0;
}