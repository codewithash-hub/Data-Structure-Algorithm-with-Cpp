// Priority Queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    int arr[6] = { 10, 2, 4, 8, 6, 9 };

    // defining priority queue
    priority_queue<int> pQueue;

    // printing array
    cout << "Array: ";
    for (auto i : arr) {
        cout << i << ' ';
    }
    cout << endl;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        pQueue.push(arr[i]);
    }

    cout << "Priority Queue : ";
    while (!pQueue.empty())
    {
        cout << pQueue.top() << " ";
        pQueue.pop();
    }

    return 0;
}

