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

bool detectCycle(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return false;
    }
    node *fast = head;
    node *slow = head;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            return true;
        }
    }
    return false;    
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
    // d->next = b;
    if(detectCycle(head)){
        cout << "Cycle detected !\n";
    }
    else{
        cout << "No cycle !\n";
    }
    return 0;
}