#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> intList = {12, 16, 8, 23, 4, 6, 18, 9, 75};
    vector<int>::iterator intVecIter;
    
    for (intVecIter = intList.begin(); intVecIter != intList.end(); ++intVecIter) {
        cout << *intVecIter << " ";
    }
    return 0;
} 