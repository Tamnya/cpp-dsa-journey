/*
Problem: Linear Search in Array

Concept:
- Array traversal
- Element comparison
- Flag-based detection
- Early termination using break

Time Complexity: O(n)
Space Complexity: O(1)
*/
#include <iostream>
using namespace std;
int main()
{
    const int MAX_SIZE = 100000;
    int n, x;
    int arr[MAX_SIZE];
    bool found = false;

    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter " << n << " elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element you wanna search: " << endl;
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << " element found at index: " << i;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Not found";
    }
    return 0;
}