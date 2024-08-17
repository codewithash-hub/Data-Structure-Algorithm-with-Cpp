#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vecList = {12, 16, 8, 23, 4, 6, 18, 9, 75};
    sort(vecList.begin(), vecList.end());
    
    //Deletes all elements from the container.
    // vecList.clear();

    // vecList.erase(3, 6);
    
    // A copy of elem is inserted into vecList at the end.
    vecList.push_back(50);
    sort(vecList.begin(), vecList.end()); // 4 6 8 9 12 16 18 23 50 75 
    
    // Deletes the last element.
    vecList.pop_back();
    
    // Changes the number of elements to num. If size(), that is, the number of elements 
    // in the container increases, the default constructor creates the new elements.
    vecList.resize(5);
    vecList.resize(15);

    for (int i = 0; i < vecList.size(); i++) {
        cout << vecList.at(i) << " ";
    }
    return 0;
}  