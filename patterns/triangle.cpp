/*
Problem: Centered Triangle Star Pattern

Concept:
- Nested loops
- Outer loop controls number of rows
- First inner loop prints leading spaces
- Second inner loop prints stars

Time Complexity: O(n^2)
- Each row prints up to n characters
- Total rows = n

Space Complexity: O(1)
- Only constant variables used
*/
#include <iostream>
using namespace std;

void triangle(int n)
{
    int i = 0, j = 0, k = 0;
    while (i < n)
    {
        while (k <= n - i - 2)
        {
            cout << " ";
            k++;
        }
        k = 0;

        while (j <= i)
        {
            cout << "* ";
            j++;
        }
        j = 0;
        i++;
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;

    triangle(n);
    return 0;
}