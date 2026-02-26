/*
Problem: Solid Square Star Pattern

Concept:
- Nested loops
- Outer loop controls rows
- Inner loop controls columns
- Pattern printing using constant character

Time Complexity: O(n^2)
- Two nested loops each running n times

Space Complexity: O(1)
- No extra data structures used
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}