#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vecList = {12, 16, 8, 23, 4, 6, 18, 9, 75};
    
    // Printing out the original vector 
    cout << "Original vector :\n"; 
    for (auto x : vecList) 
        cout << x << " "; 
    cout << "\n";
    
    // Inserting the value 100 at position 3
    vecList.insert(vecList.begin() + 3, 100);
    
    // Printing the modified vector 
    cout << "Vector after inserting 100 at position 3 :\n"; 
    for (auto x : vecList) 
        cout << x << " "; 
    cout << "\n"; 
  
    // Inserting the value 500 at position 1
    vecList.insert(vecList.begin() + 1, 500);
    
    cout << "Vector after inserting 500 at position 1 :\n"; 
    for (auto x : vecList)
        cout << x << " ";
    cout << "\n";
    return 0;
}