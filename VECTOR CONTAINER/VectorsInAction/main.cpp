#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> intList;
    intList.push_back(13);
    intList.push_back(75);
    intList.push_back(28);
    intList.push_back(35);

    for (int i = 0; i < intList.size(); i++)
        cout << intList[i] << " ";
    cout << endl;

    for (int i = 0; i < intList.size(); i++)
        intList[i] *= 2;
    
    for (int i = 0; i < intList.size(); i++)
        cout << intList[i] << " ";
    cout << endl;
    
    vector<int>::iterator listIter;
    
    for (listIter = intList.begin(); listIter != intList.end(); ++listIter)
        cout << *listIter << " ";
    cout << endl;

    listIter = intList.begin();
    listIter++;
    listIter++;
    intList.insert(listIter, 5, 88);
    
    for (listIter = intList.begin(); listIter != intList.end(); ++listIter)
        cout << *listIter << " ";
    
    return 0;
} 