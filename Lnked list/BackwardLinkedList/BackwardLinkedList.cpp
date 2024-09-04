// BackwardLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* link;
};

Node* head, * last, * newNode;

Node* buildListBackwards()
{
    int num;
    cout << "Enter a list of integers ending with -999." << endl;
    cin >> num;

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

void display_node() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->link;
    }
}

int main()
{
    buildListBackwards();
    display_node();

    return 0;
}