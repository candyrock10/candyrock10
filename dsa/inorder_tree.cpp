#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;  // left pointer
    node *right; // right pointer

    node(int d) // constructor
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildtree(node *root) // function
{
    cout << "enter the data:" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "enter data for inserting in the left of" << data << endl;
    root->left = buildtree(root->left);
    cout << "enter data for inserting in the right of" << data << endl;
    root->right = buildtree(root->right);
    return root;
}



void inorder(node* root)
{
    if(root == NULL)
    {
        return ;
    }

    inorder(root->left);  // l
    cout<< root->data <<"";  // n
    inorder(root->right);  //r
}




int main()
{

    node *root = NULL;
    root = buildtree(root);    // function call
    
    cout<<"inorder traversal is :";
    inorder(root);
    return 0;
}
