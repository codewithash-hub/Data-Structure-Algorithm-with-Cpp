#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    int intArray[] = {5, 6, 8, 3, 40, 36, 98, 29, 75};
    vector<int> vecList(9);

    // create a ostream iterator
    ostream_iterator<int> screen(cout, " ");

    // print intArray using screen iterator
    copy(intArray, intArray + 9, screen);
    cout << "\n";

    // put components of intArray into vecList
    copy(intArray, intArray + 9, vecList.begin());

    // print vecList using screen iterator.
    copy(vecList.begin(), vecList.end(), screen);
    cout << "\n";

    copy(intArray + 1, intArray + 9, intArray);
    cout << "After shifting the elements one position to the left, intArray:" << endl;
    copy(intArray, intArray + 9, screen);
    cout << "\n";

    copy(vecList.rbegin() + 2, vecList.rend(), vecList.rbegin());
    cout << "After shifting the elements down by two positions, vecList:" << endl;
    copy(vecList.begin(), vecList.end(), screen);

    return 0;
} 