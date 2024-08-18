#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vecList = {12, 16, 8, 23, 4, 6, 18, 9, 75};

    vecList.insert(vecList.begin(), 5);

    sort(vecList.begin(), vecList.end());
    
    for (int i = 0; i < vecList.size(); i++) 
    {
        cout << vecList[i] << " ";
    }
    
    return 0;
}       