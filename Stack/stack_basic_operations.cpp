#include <iostream>
using namespace std;

class StackNode
{
public:
    int data;
    StackNode *next;

    void push(StackNode **root, int data)
    {
        StackNode *newnode = new StackNode();
        newnode->data = data;
        newnode->next = *root;
        *root = newnode;
    }

    int pop(StackNode **root)
    {
        StackNode *temp;
        temp = *root;
        (*root) = (*root)->next;
        return temp->data;
    }

    int peek(StackNode *root)
    {
        int data = root->data;
        return data;
    }
};
int main()
{
}
