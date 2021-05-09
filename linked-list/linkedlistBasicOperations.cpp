/* Linked List basic operations
Insert node at front,
find the length of a linked list,
search an element in a linked list */

#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void insertnodeatfront(node **head, int data)
{
    node *n = new node();
    n->data = data;
    if (*head == NULL)
    {
        n->next = NULL;
    }
    else
    {
        n->next = *head;
    }
    *head = n;
}

void printlist(node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int lengthoflinkedlist(node *head)
{
    int count = 0;
    while (head)
    {
        head = head->next;
        count++;
    }
    return count;
}

bool searchanelement(node *head, int x)
{
    while (head)
    {
        if (head->data == x)
            return true;
        head = head->next;
    }
    return false;
}
int main()
{
    node *head = NULL;
    int x = 10, len = 0;
    bool search = false;
    insertnodeatfront(&head, x);
    insertnodeatfront(&head, x + 2);
    insertnodeatfront(&head, x + 4);
    // printlist(head);
    len = lengthoflinkedlist(head);
    cout << len;
    search = searchanelement(head, 9);
    if (search)
    {
        cout << " "
             << "Found"
             << " ";
    }
    else
    {
        cout << "Not Found"
             << " ";
    }
}
