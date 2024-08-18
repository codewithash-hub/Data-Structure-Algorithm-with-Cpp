<<<<<<< HEAD
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
=======
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
>>>>>>> 9503777119de8f22f646ff5f46800125d31dbbf2
}