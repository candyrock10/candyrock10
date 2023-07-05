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

void levelordertraverser(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        
        q.pop();

        if (temp = NULL) // temp null means that previous level is compleated
        {
            cout << endl;
            if (!q.empty()) // queue has some child nodes left
            {
                q.push(NULL);
            }
        }

        else
        {
            cout<< temp ->data <<"";

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

int main()
{

    node *root = NULL;
    root = buildtree(root);    // function call
    levelordertraverser(root); // level order
    cout<<"level order traverser is"<<endl;
    levelordertraverser(root);
    
    return 0;
}
