#include <iostream>
#include <iomanip>
using namespace std;

class node
{
private:
public:
    int val;
    node *next;
    node(int n)
    {
        val = n;
        next = NULL;
    }
};

void printList(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

node *mergeLists(node *a, node *b)
{
    node *temp = NULL;
    if (a == NULL)
    {
        return b;
    }
    if (b == NULL)
    {
        return a;
    }
    if (a->val <= b->val)
    {
        temp = a;
        temp->next = mergeLists(a->next, b);
    }
    else
    {
        temp = b;
        temp->next = mergeLists(a, b->next);
    }
    return temp;
}

int main()
{
    node *a = new node(1);
    node *b = new node(2);
    a->next = b;
    node *c = new node(3);
    b->next = c;
    node *m = new node(2);
    node *n = new node(4);
    m->next = n;
    node *k = new node(6);
    n->next = k;
    a = mergeLists(a,m);
    printList(a);

    return 0;
}