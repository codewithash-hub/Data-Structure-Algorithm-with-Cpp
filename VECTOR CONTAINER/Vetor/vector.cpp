<<<<<<< HEAD
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> vecList = {12, 16, 8, 23, 4, 6, 18, 9, 75};
    
    vecList.push_back(30);
    
    
    for_each(vecList.begin(), vecList.end()), [](int n) {
        cout << n << " ";
    });
    return 0;
=======
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> vecList = {12, 16, 8, 23, 4, 6, 18, 9, 75};
    
    vecList.push_back(30);
    
    
    for_each(vecList.begin(), vecList.end()), [](int n) {
        cout << n << " ";
    });
    return 0;
>>>>>>> 9503777119de8f22f646ff5f46800125d31dbbf2
}