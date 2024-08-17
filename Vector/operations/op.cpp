#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vecList = {12, 16, 8, 23, 4, 6, 18, 9, 75};
    
    sort(vecList.begin(), vecList.end());

    for (int i = 0; i < vecList.size(); i++) {
        cout << vecList[4] << endl;
    }
    

    for (int i:vecList) {
        cout << i << " ";
    }
    return 0;
}