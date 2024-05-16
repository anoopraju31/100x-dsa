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

    while (current->next != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
}

// Add a node to end of the linked list
void addNode(Node *head, int val)
{
    Node *node = new Node(val, NULL);

    Node *current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = node;
}

int main()
{
    Node *head = new Node(1, NULL);

    addNode(head, 2);
    addNode(head, 3);
    addNode(head, 4);
    addNode(head, 5);

    traverse(head);

    return 0;
}