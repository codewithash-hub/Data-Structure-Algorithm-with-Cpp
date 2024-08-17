// VecList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // create an empty vector.
    vector<int> vecList1;

    // create a vector and initialize it to the elements of another vector.
    vector<int> vecList2(vecList1);

    // create a vector of size n.
    vector<int> vecList3(3);

    // create a vector of size n. vecList sinitalized using n copies of the element elem.
    vector<int> vecList4(n, elem);

    // create a vector and initialize its elements in the range [begin, end).
    vector<int> vecList5(begin, end);

    return 0;
}