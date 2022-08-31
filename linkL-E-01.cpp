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
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

node *reverseList(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *temp = reverseList(head->next);
    head->next->next = head;
    head->next = NULL; 
    return temp;   
}

int main()
{
    node *head = new node(1);
    node *a = new node(2);
    head->next = a;
    node *b = new node(3);
    a->next = b;
    node *c = new node(4);
    b->next = c;
    node *d = new node(5);
    c->next = d;
    printList(head);
    head = reverseList(head);
    printList(head);
    return 0;
}