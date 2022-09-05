// sort a list of 0s 1s and 2s
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

void sortList(node *head)
{
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    node *temp = head;
    while (temp)
    {
        if (temp->val == 0)
        {
            cnt0++;
        }
        else if (temp->val == 1)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
        temp = temp->next;
    }
    temp = head;
    while (temp)
    {
        while (cnt0--)
        {
            temp->val = 0;
            temp = temp->next;
        }
        while (cnt1--)
        {
            temp->val = 1;
            temp = temp->next;
        }
        while (cnt2--)
        {
            temp->val = 2;
            temp = temp->next;
        }
    }
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
    node *b = new node(0);
    a->next = b;
    node *c = new node(2);
    b->next = c;
    node *d = new node(1);
    c->next = d;
    sortList(head);
    printList(head);
    return 0;
}