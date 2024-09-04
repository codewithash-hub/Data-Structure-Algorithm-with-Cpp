// Forward Linked List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* link;
};

Node* head, * last, * newNode;

Node* buildListForward()
{
    int num;

    cout << "Enter a list of integers ending with -999." << endl;
    cin >> num;

    head = NULL;
    last = NULL;

    while (num != -999)
    {
        newNode = new Node;
        newNode->data = num;
        newNode->link = NULL;

        if (head == NULL) {
            head = newNode;
            last = newNode;
        }
        else {
            last->link = newNode;
            last = newNode;
        }
        cin >> num;
    }
    return head;
}

void display_node()
{
    Node* n = head;
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->link;
    }
}

int main()
{
    buildListForward();
    display_node();
    return 0;
}