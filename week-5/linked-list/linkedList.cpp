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

// Add a node at beginning
Node *addAtBeginning(Node *head, int data)
{
    Node *node = new Node(data, head);
    head = node;

    return head;
}

// Removing node from beginning
Node *removeFromBeginning(Node *head)
{
    Node *node = head;
    head = head->next;

    delete node;

    return head;
}

// Removing from end
int removeFromEnd(Node *head)
{
    Node *current = head;
    Node *previous = NULL;

    while (current->next != NULL)
    {
        previous = current;
        current = current->next;
    }

    previous->next = NULL;
    int data = current->data;
    delete current;

    return data;
}

int main()
{
    Node *head = NULL;

    head = addNode(NULL, 1);
    head = addNode(head, 2);
    head = addNode(head, 3);
    head = addNode(head, 4);
    head = addNode(head, 5);
    head = addAtBeginning(head, 0);

    traverse(head);
    cout << endl;

    head = removeFromBeginning(head);

    traverse(head);
    cout << endl;

    head = addNode(head, 6);

    traverse(head);
    cout << endl;

    removeFromEnd(head);

    traverse(head);
    cout << endl;

    return 0;
}