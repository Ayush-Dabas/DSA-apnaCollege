// multiply two numbers represented by linked lists
#include <iostream>
#include <iomanip>
#include <math.h>
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

int findNum(node *head)
{
    node *temp = head;
    int size = 0;
    while (temp)
    {
        size += 1;
        temp = temp->next;
    }
    temp = head;
    int num = 0;
    while (size>0)
    {
        num = ((num*10)+temp->val);
        temp = temp->next;
        size -= 1;
    }
    return num;
}

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
    // cout << findNum(head);
    cout << findNum(head)*findNum(c) << endl;
    return 0;
}