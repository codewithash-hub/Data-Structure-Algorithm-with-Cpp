#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head, *last, *newNode;

Node* insertNode()
{
    int num;
    cout << "Enter a list ending with -999: ";
    cin >> num;

    head = nullptr;
    last = nullptr;

    while (num != -999) {
        newNode = new Node;
        newNode->data = num;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            last = newNode;
        } else {
            last->next = newNode;
            last = newNode;
        }
        cin >> num;
    }
    return head;
}

Node* reservedList()
{
    int num;
    cout << "Enter a list ending with -999: ";
    cin >> num;

    head = nullptr;

    while (num != -999) {
        newNode = new Node;

        newNode->data = num;
        newNode->next = head;

        head = newNode;

        cin >> num;
    }
    return head;
}

void printList()
{
    // head = nullptr;

    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "nullptr";
}

Node* deleteNode()
{
    if (head == nullptr)
        return nullptr;

    Node* temp = new Node;
    head = head->next;
    delete temp;

    return head;
}

void deleteNodeAtPosition(Node* head, int pos)
{
    Node* temp = head;
    Node* prev = nullptr;

    while (temp != nullptr) {
        if (temp->data == pos) {
            if (prev == nullptr) {
                head = temp->next;
            } else {
                prev->next = temp->next;
            }
            delete temp;
            return;
        }
        prev = temp;
        temp = temp->next;
    }
}

int main()
{
    insertNode();
    printList();
    cout << "\n";
    reservedList();
    printList();
    cout << "\n";
    deleteNode();
    printList();
    cout << "\n";
    int num;
    cout << "Enter a node to be deleted: ";
    cin >> num;

    deleteNodeAtPosition(reservedList(), num);
    printList();
    return 0;
}
