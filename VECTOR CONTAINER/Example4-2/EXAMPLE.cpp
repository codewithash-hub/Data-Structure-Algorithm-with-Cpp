<<<<<<< HEAD
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
=======
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
>>>>>>> 9503777119de8f22f646ff5f46800125d31dbbf2
} 