#include <iostream>
#include <deque>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    deque<int> intDeq;
    ostream_iterator<int> screen(cout, " ");

    // pushing element to deq
    intDeq.push_back(13);
    intDeq.push_back(75);
    intDeq.push_back(28);
    intDeq.push_back(35);

    // printing elements of a deque intDeq
    cout << "intDeq: ";
    copy(intDeq.begin(), intDeq.end(), screen);
    cout << endl;
    
    // inerting elements at the front of a deque
    intDeq.push_front(0);
    intDeq.push_back(100);

    // printing a deque
    cout << "After adding two more elements, one at the front and one at the back, intDeq: \n";
    copy(intDeq.begin(), intDeq.end(), screen);
    cout << "\n";
    
    intDeq.pop_front();
    intDeq.pop_front();

    // printing a deque after popping in front.
    cout << "After removing the first two elements, intDeq: \n";
    copy(intDeq.begin(), intDeq.end(), screen);
    cout << "\n";

    intDeq.pop_back();
    intDeq.pop_back();

    // printing a deque after popping at the back.
    cout << "After removing the last two elements, intDeq = \n";
    copy(intDeq.begin(), intDeq.end(), screen);
    cout << "\n";

    deque<int>::iterator deqIter;

    deqIter = intDeq.begin();
    deqIter++;
    intDeq.insert(deqIter, 444);
    cout << "After inserting 444, intDeq: \n";
    copy(intDeq.begin(), intDeq.end(), screen);
    
    return 0;
}