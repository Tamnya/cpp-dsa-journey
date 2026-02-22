/*
Problem: Input and Traverse Array using Vector

Concept:
- Dynamic array using STL vector

Time Complexity: O(n)
Space Complexity: O(n)  // vector stores n elements
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}