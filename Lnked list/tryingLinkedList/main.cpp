#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *link;
};

Node *head, *last, *newNode;

Node* forwardLInkedList(int num)
{
    head = NULL;
    last = NULL;

    while (num != -999)
    {
        newNode = new Node;
        newNode->data = num;
        newNode->link = NULL;

        if (head == NULL)
        {
            head = newNode;
            last = newNode;
        }
        else
        {
            last->link = newNode;
            last = newNode;
        }
        cin >> num;
    }
    return head;
}

Node* reversedLInkedList(int num)
{
    head = NULL;
    while (num != -999)
    {
        newNode = new Node;
        newNode->data = num;
        newNode->link = head;

        head = newNode;
        cin >> num;
    }
    return head;
}

void display_list()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}

int main()
{
    int num;
    cout << "Enter a list of integers ending with -999" << endl;
    cin >> num;

    //forwardLInkedList(num);
    reversedLInkedList(num);
    display_list();

    return 0;
}
