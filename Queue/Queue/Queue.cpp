// Queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int>myQueue;

    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    myQueue.push(4);
    myQueue.push(5);

    //cout << myQueue.front()<<'\n';
    //cout << myQueue.back();
    while (!myQueue.empty()) {
        cout << myQueue.front()<<'\n';
        myQueue.pop();
    }
}
