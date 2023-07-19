#include <bits/stdc++.h>
#include <queue>
using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = this->right = NULL;
    }
};

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
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
            cout << temp->data << " ";
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

Node *insertIntoBST(Node *root, int data)
{

    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (data > root->data)
    {
        root->right = insertIntoBST(root->right, data);
    }
    else
    {
        root->left = insertIntoBST(root->left, data);
    }

    return root;
}

Node *minVal(Node *root)
{
    Node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node *maxVal(Node *root)
{
    Node *temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node* deleteNode(Node* root, int val){
    if(root == NULL){
        return root;
    }
    
    if(root->data == val){
        // for 0 child
            if(root->left ==NULL && root->right ==NULL){
                delete root;
                return NULL;
            }
        // for 1 child
            if(root->left !=NULL && root->right == NULL){
                Node* temp = root->left;
                delete root;
                return temp;
            }
            
            if(root->right == NULL && root->right !=NULL){
                Node* temp = root->right;
                delete root;
                return temp;
            }
        // for 2 child

            if(root->left != NULL && root->right != NULL){
                int min = minVal(root->right) ->data;
                root->data = min;
                root->right=deleteNode(root->right ,min );
                return root;

            }
        

    }
    else if(root->data >val){
        root->left = deleteNode(root->left,val);
        return root;
    }
    else{
        root->right = deleteNode(root->right,val);
        return root;
    }
}

void takeInput(Node *&root)
{

    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int main()
{
    Node *root = NULL;

    cout << "Enter data to creat BST" << endl;
    takeInput(root);

    cout << "printing the BST" << endl;
    levelOrderTraversal(root);

    root = deleteNode(root,20);

    cout << endl
         << "printing Inorder" << endl;
    inorder(root);

    cout << endl
         << "printing preorder" << endl;
    preorder(root);

    cout << endl
         << "printing Postorder" << endl;
    postorder(root);

    cout << endl
         << "Printing minvalue"<<" " << minVal(root)->data;

    cout << endl
         << "Printing maxvalue"<<" " << maxVal(root)->data;
    return 0;
};
