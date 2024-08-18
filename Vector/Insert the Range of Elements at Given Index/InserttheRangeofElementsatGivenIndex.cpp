#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std; 
  
int main() 
{
    // Initialising the vectors
    vector<int> vecList = { 1, 2, 3, 4, 5 }; 
    vector<int> temp = { 2, 5, 9, 0, 3, 10 };
    
    // Printing out the original vector 
    cout << "Original vector :\n"; 
    for (auto x : vecList) 
        cout << x << " "; 
    cout << endl; 
    
    // Inserting the portion of temp vector in vecList 
    // vector temp.begin()+3 is starting iterator of vector 
    // to be copied temp.begin()+5 is ending iterator of 
    // vector to be copied
    
    vecList.insert(vecList.begin() + 3, temp.begin() + 2, temp.end() - 1);
    
    // Printing modified vector
    cout << "Vector after Inserting the portion of temp vector in vecList vector\n";
    for (auto x : vecList)
        cout << x << " ";

    return 0;
}