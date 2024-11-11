// Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> myStack;

    // Adding element to the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);

    // print elements
    cout << "Original stack" << endl;
    while (!myStack.empty())
    {
        cout << myStack.top() << endl;
        myStack.pop();
    }

    // Adding element to the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);

    myStack.pop();
    myStack.pop();

    // After popping 2 elements
    cout << endl << "After popping 2 elements" << endl;
    while (!myStack.empty())
    {
        cout << myStack.top() << endl;
        myStack.pop();
    }
}

