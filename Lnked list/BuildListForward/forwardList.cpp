#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *link;
};

struct Node* buildListForward()
{
    Node *head, *last, *newNode;
    int num;
    
    cout << "Enter a list of integers ending with -999." << endl;
    cin >> num; 

    head = NULL;

    while (num != -999)
    {
        newNode = new Node;
        newNode->data = num;
        newNode->link = NULL;

        if (head == NULL) {
            head = newNode;
            last = newNode;
        } else {
            last->link = newNode;
            last = newNode;
        }
        cin >> num;
    }
    return head;
}

int main()
{
    buildListForward();
    return 0;
} 