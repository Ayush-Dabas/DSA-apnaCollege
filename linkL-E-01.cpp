// reverse linked list
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
        cout << head->val << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main()
{
    node *Head = new node(1);
    node *a = new node(2);
    Head->next = a;
    node *b = new node(3);
    a->next = b;
    node *c = new node(4);
    b->next = c;
    node *d = new node(5);
    c->next = d;
    return 0;
}