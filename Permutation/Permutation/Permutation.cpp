// Permutation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void permutation(string& s, int index)
{
    // Base case
    if (index == s.size() - 1)
    {
        cout << s << endl;
        return;
    }

    for (int i = index; i < s.size(); i++)
    {
        swap(s[index], s[i]);

        permutation(s, index + 1);

        swap(s[index], s[i]);
    }
}

void permute(string& s)
{
    permutation(s, 0);
}

int main()
{
    string s = "ABC";
    permute(s);

    return 0;
}

