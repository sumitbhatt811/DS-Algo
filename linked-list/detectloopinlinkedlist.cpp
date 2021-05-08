#include <iostream>
#include <unordered_set>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void insertnodeatfront(node **head, int x)
{
    node *n = new node();
    n->data = x;
    if (*head == NULL)
    {
        n->next = NULL;
        *head = n;
    }
    else
    {
        n->next = (*head);
        *head = n;
    }
}
void printList(node *head)
{
    while (head)
    {
        cout << head->data;
        head = head->next;
    }
}
bool detectloop(node *head)
{
    unordered_set<node *> s;
    while (head)
    {
        if (s.find(head) != s.end())
            return true;

        s.insert(head);
        head = head->next;
    }
    return false;
}
int main()
{
    node *head = NULL;
    int x = 10;
    bool loop = false;
    insertnodeatfront(&head, x);
    insertnodeatfront(&head, x + 2);
    insertnodeatfront(&head, x + 4);
    head->next->next->next = head;
    loop = detectloop(head);
    // printList(head);
    cout << " " << head->data;
    if (loop)
        cout << "Loop Found"
             << " ";
    else
        cout << "No loop found"
             << " ";
}
