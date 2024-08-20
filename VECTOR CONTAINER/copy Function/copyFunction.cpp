#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int intArray[] = {5, 6, 8, 3, 40, 36, 98, 29, 75};
    vector<int> vecList(9);
    
    copy(intArray, intArray + 9, vecList.begin());
    
    for (int i = 0; i < vecList.size(); i++)
        cout << vecList[i] << endl;

    return 0;
}