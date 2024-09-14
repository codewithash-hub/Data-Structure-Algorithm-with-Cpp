#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *link;
    Node(int value)
    {
        data = value;
        link = nullptr;
    }
};

Node* deleteHead(Node* head)
{
    if (head == nullptr)
        return nullptr;

    Node *current = head;
    head = head->link;
    delete current;

    return head;
}

void printList(Node* head)
{
    while (head != nullptr)
    {
        cout << head->data << "-> ";
        head = head->link;
    }
}

int main()
{
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);


    head->link = second;


    second->link = third;


    third->link = fourth;


    fourth->link = nullptr;

    cout << "Original list: ";
    printList(head);
    cout << "\n";
     // Deleting the head node
    head = deleteHead(head);
    cout << "List after deleting the head: ";
    printList(head);

    return 0;
}
