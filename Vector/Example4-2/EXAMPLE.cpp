#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vecList(5);

    for (int j = 0; j < 5; ++j) {
        vecList.at(j) = j;
    }

    for (int j = 0; j < 5; ++j) {
        cout << vecList[j] << " ";
    }
    cout << endl;
    if (vecList.front() + vecList.back() == 4) {
        cout << "equal";
    } else {
        cout << "Not equal.";
    }
    return 0;
} 