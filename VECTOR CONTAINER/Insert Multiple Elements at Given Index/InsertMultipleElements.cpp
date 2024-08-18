#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vecList{12, 16, 8, 23, 4, 6, 18, 9, 75};
    
    // Printing out the original vector 
    cout << "Original vector :\n"; 
    for (auto x : vecList) 
        cout << x << " "; 
    cout << "\n";

    // Inserting the value 100, 4 times starting at position 3
    vecList.insert(vecList.begin() + 3, 4, 100);

    // Printing the modified vector 
    cout << "Vector after inserting 100, 4 times, starting at position 3 :\n"; 
    for (auto x : vecList) 
        cout << x << " "; 

    return 0;
} 