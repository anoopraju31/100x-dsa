# Linked List

### Introduction to Linked List

**Linked List** is a **linear data structure**, similar to arrays. The major difference is, in linked list, the elements are not next to each other in memory like that in arrays. In array, the elements occupy a continuous block of memory, whereas in linked list, the elements do not occupy consecutive blocks. As a result, we cannot use indices in linked list. Each element (we call it a node of a linked list) holds the address (or reference) to the next node. 

![](images/images.png)

Each element (or node) in a linked list holds at least 2 values:
    1. The Data to be stored
    2. Pointer to the next node

Two Important nodes of a linked list are:
1. **Head:** The head is a pointer to the first node of a linked list. We begin our iteration from this node. Generally in every linked list, head node will be given
2. **Tail:** The tail is a pointer to the last node of a linked list. This is optional 

### Creating a Linked List

First let’s define a class that describes a Node. Let’s say each element holds an integer value.

``` cpp
class Node {
    int data;
    Node *next;

    public:
        Node() {
            this->data = 0;
            this->next = NULL;
        }

        Node(int v, Node *next) {
            this->data = v;
            this->next = next;
        }
};
```