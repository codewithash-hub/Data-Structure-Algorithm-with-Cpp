// queues.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> intQueue;

    // Adding element to the queue
    intQueue.push(12);
    intQueue.push(13);
    intQueue.push(10);
    intQueue.push(5);
    
    //Accessing the front element
    cout << "front element of intQueue: " << intQueue.front() << endl;
    cout << "back element of intQueue : " << intQueue.back() << endl;

    intQueue.pop();

    cout << "After the pop operation, the front element of intQueue: " << intQueue.front() << endl;

    cout << "intQueue elements: ";
    while (!intQueue.empty())
    {
        cout << intQueue.front() << " ";
        intQueue.pop();
    }
    cout << endl;


    return 0;
}

