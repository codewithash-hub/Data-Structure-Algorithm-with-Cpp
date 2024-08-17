#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // To add elements into intList, we can use the function push_back
    vector<int> vecList;
    
    vecList.push_back(35);
    vecList.push_back(55);
    
    for (int i = 0; i < vecList.size(); i++) {
        cout << vecList.at(i) << " ";
    }

    return 0;
} 