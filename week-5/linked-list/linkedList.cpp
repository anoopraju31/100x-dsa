#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int v, Node *next)
    {
        this->data = v;
        this->next = next;
    }
};

// Traverse a Linked List
void traverse(Node *head)
{
    Node *current = head;

    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
}

// Add a node to end of the linked list
Node *addNode(Node *head, int val)
{
    Node *node = new Node(val, NULL);

    if (head == NULL)
        return node;

    Node *current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = node;

    return head;
}

int main()
{
    Node *head = NULL;

    head = addNode(NULL, 1);
    head = addNode(head, 2);
    head = addNode(head, 3);
    head = addNode(head, 4);
    head = addNode(head, 5);

    traverse(head);

    return 0;
}