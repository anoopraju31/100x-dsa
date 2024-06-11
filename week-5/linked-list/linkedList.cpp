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
Node *removeFromEnd(Node *head)
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

    return head;
}

// Delete node by value
Node *deleteNode(Node *head, int k)
{
    Node *current = head;

    if (head->data == k)
    {
        head = head->next;
        delete current;

        return head;
    }

    Node *previous = NULL;

    while (current != NULL)
    {
        if (current->data == k)
        {
            previous->next = current->next;
            delete current;

            return head;
        }

        previous = current;
        current = current->next;
    }

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
    cout << endl;

    head = addAtBeginning(head, 0);

    traverse(head);
    cout << endl;

    head = removeFromBeginning(head);

    traverse(head);
    cout << endl;

    head = addNode(head, 6);

    traverse(head);
    cout << endl;

    head = removeFromEnd(head);

    traverse(head);
    cout << endl;

    head = deleteNode(head, 3);

    traverse(head);
    cout << endl;

    return 0;
}