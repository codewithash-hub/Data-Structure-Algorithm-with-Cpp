#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    int intArray[] = {5, 6, 8, 3, 40, 36, 98, 29, 75};
    vector<int> vecList(9);

    copy(intArray, intArray + 9, vecList.begin());

    ostream_iterator<int> screen(cout, " ");
    
    copy(intArray, intArray + 9, screen);
    cout << "\n";
    copy(vecList.begin(), vecList.end(), screen);
    cout << "\n";
    copy(vecList.begin(), vecList.end(), ostream_iterator<int> screen(cout, " "));

    // Of course, we can directly specify an ostream iterator in the function copy. For example, the statement (shown previously)
    // copy(vecList.begin(), vecList.end(), screen); is equivalent to the statement
    // copy(vecList.begin(), vecList.end(), ostream_iterator<int>(cout, " "));
    // Finally, the statement
    // copy(vecList.begin(), vecList.end(), ostream_iterator<int>(cout, ", "));
    // outputs the elements of vecList with a comma and space between them.
    
    return 0;
}