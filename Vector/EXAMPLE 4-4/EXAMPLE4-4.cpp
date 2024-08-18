#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int intArray[7]{1, 3, 5, 7, 9, 11, 13};
    vector<int> vecList(intArray, intArray + 7);
    vector<int>::iterator intVecIter;
    
    intVecIter = vecList.begin() + 1;
    // intVecIter++;
    vecList.insert(intVecIter, 22);
    
    for (auto x : vecList)
        cout << x << " ";
    return 0;
}

// intVecIter holds the first element of vecList.
// now intVecIter is incremented by 1 which means it now holds the second element.
// insert() function takes two parameters(pos, elem),
// intVecIter = pos which points to the position where insertion is to be done,
// elem is the element which is to be inserted into the vector continer.
// now "intVecIter = vecList.begin() + 1" is the same as "intVecIter++"